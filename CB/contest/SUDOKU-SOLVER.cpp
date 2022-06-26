#include<iostream>
#include<cmath>
using namespace std;



bool is_valid(int arr[][10],int row,int col,int n,int target){

    for(int i=0;i<n;i++){
        if(arr[row][i] == target){
            return false;
        }
        if(arr[i][col]==target){
            return false;
        }
    }

    int start_row = (row/sqrt(n)) * sqrt(n);
    int start_col = (col/sqrt(n)) * sqrt(n);
    for(int i=start_row;i<start_row+3;i++){
        for(int j=start_col;j<start_col+3;j++){
            if(target == arr[i][j]){
                return false;
            }
        }
    }
    return true;
}



void sudoku_solver(int arr[][10],int i,int j,int n){
    // base case
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(j==n){
        sudoku_solver(arr,i+1,0,n);
        return;
    }
    // recursive case
    if(arr[i][j]!=0){
        sudoku_solver(arr,i,j+1,n);
        return;
    }

    for(int t=1;t<=n;t++){
        if(is_valid(arr,i,j,n,t)){
            arr[i][j] = t;
            sudoku_solver(arr,i,j+1,n);
            arr[i][j] = 0;
        }
    }
}




int main(){
    int arr[10][10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    sudoku_solver(arr,0,0,n);
    return 0;
}