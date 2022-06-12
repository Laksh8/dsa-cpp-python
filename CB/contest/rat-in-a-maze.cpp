#include<iostream>
using namespace std;


bool checkPath(int maze[][4],int i,int j){
    // Base case
    if(i==0 and j==0){
        return true;
    }

    if(maze[i][j] !=1){
        return false;
    }

    // recursive case
    // check top
    bool top = false;
    if(i>0)
        top = checkPath(maze,i-1,j);
    // check left
    bool left = false;
    if(j<0)
        left = checkPath(maze,i,j-1);

    if(top or left){
        return true;
    }
    return false;
}


int main(){
    int maze[][4]= {
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {0, 1, 1, 1}
    };

    cout<<checkPath(maze,3,3)<<endl;
    return 0;
}