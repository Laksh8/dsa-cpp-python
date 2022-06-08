#include<iostream>
using namespace std;


bool checkPath(char arr[][5],int out[][4],int i,int j){
    // base case
    if(i==0 and j == 0){
        out[i][j] = 1;
        return false;
    }
    if(arr[i][j] == 'X'){
        return false;
    }
    // recursion case

    // check from top
    bool top = false;
    if(i>0){
        top = checkPath(arr,out,i-1,j);
    }
    // check from left
    bool left = false;
    if(j>0){
        left = checkPath(arr,out,i,j-1);
    }
    if(left or top){
        out[i][j] = 1;
        return true;
    }

    return false;

}


int main(){
    int m,n;
    // cin>>m,n;
    m=4,n=4;
    char maze[][5] = {
        {'0','0','0','X','\0'},
        {'0','0','X','0','\0'},
        {'X','0','0','0','\0'},
        {'0','X','0','0','\0'},
    };
    int out[4][4]={0};
    checkPath(maze,out,m-1,n-1);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<out[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}