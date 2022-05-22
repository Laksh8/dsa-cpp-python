#include<iostream>
using namespace std;


void print_2_d(int arr[][3],int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int arr[][3] = {
        {1,2},{3,4},{0,9,8}
    };
    print_2_d(arr,3,3);
    return 0;
}