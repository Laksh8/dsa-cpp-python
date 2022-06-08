#include<iostream>
using namespace std;


bool checkPath(char arr[][5],int i,int j,int &count){
    // base case
    if(i==0 and j == 0){
        count++;
        return false;
    }
    if(arr[i][j] == 'X'){
        return false;
    }
    // recursion case

    // check from top
    bool top = false;
    if(i>0){
        top = checkPath(arr,i-1,j,count);
    }
    // check from left
    bool left = false;
    if(j>0){
        left = checkPath(arr,i,j-1,count);
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
        {'0','0','X','0','\0'},
        {'X','0','0','0','\0'},
        {'0','X','0','0','\0'},
    };
    int count = 0;
    checkPath(maze,m-1,n-1,count);
    cout<<count;
    return 0;
}