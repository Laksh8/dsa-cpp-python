#include<iostream>
using namespace std;


void transpose(int arr[100][100],int &row, int &column){

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i<j)
                swap(arr[i][j],arr[j][i]);
        }
    }
    swap(row,column);
}

void print_2_d(int arr[100][100],int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}



int main(){

    int arr[100][100];
    int row,col;
    cin>>row>>col;
    cout<<"ENTER 2D array "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    transpose(arr,row,col);
    print_2_d(arr,row,col);
    return 0;
}