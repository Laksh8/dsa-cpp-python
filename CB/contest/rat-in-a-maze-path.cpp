#include<iostream>
using namespace std;

void mazePath(int maze[][4],int path[][4],int i,int j){
    // base case
    if(i < 0 or j < 0) {
		return;
	}
    if(i==0 and j==0){
        path[0][0] = 1;
        for(int k=0;k<4;k++){
            for(int l=0;l<4;l++){
                cout<<path[k][l]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        path[0][0] = 0;
        return;
    }
    if(maze[i][j]!=1){
        return;
    }
    // recursive case
    // check top
    path[i][j] = 1;
    mazePath(maze,path,i-1,j);   
    // check left
    mazePath(maze,path,i,j-1);
    path[i][j] = 0;
}



int main(){
    int maze[][4]= {
        {1, 1, 1, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {0, 1, 1, 1}
    };
    int path[][4] = { {0},{0},{0},{0} };
    mazePath(maze,path,3,3);
    return 0;
}