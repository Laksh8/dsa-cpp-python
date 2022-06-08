#include<iostream>
using namespace std;


bool checkPath(char arr[][5],int i,int j){
    // base case
    if(i==0 and j == 0){
        return true;
    }
    if(arr[i][j] == 'X'){
        return false;
    }
    // recursion case

    // check from top
    bool top = false;
    if(i>0){
        top = checkPath(arr,i-1,j);
    }
    // check from left
    bool left = false;
    if(j>0){
        left = checkPath(arr,i,j-1);
    }
    if(left or top){
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
        {'0','X','X','0','\0'},
        {'X','0','0','0','\0'},
        {'0','X','0','0','\0'},
    };
    cout<<checkPath(maze,m-1,n-1);
    return 0;
}