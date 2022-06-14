#include<iostream>
using namespace std;


void print_first_path(string maze[],int out[][1000],int i,int j,int m,int n,bool &flag){
    // base case
    if( flag ){
        return;
    }
    if(i==0 and j==0){
        out[i][j] = 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<out[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        out[i][j] = 0;
        flag = true;
        return;
    }
    // recursive case
    if(maze[i][j] == 'X'){
        return;
    }
    out[i][j] = 1;
    if(i>0){
        print_first_path(maze,out,i-1,j,m,n , flag);
    }
    if(j>0){
        print_first_path(maze,out,i,j-1,m,n,flag);
    }
    out[i][j]=0;
    return;
}


int main(){
    int m=5,n=4;
    bool flag = false;
    string maze[] ={
        "0X00",
        "000X",
        "00X0",
        "X000",
        "XX00"
    };
    int out[1000][1000];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            out[i][j] = 0;
        }
    }
    print_first_path(maze,out,m-1,n-1,m,n,flag);
    return 0;
}