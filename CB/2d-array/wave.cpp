#include<iostream>
using namespace std;


void wave(int arr[3][3],int row=3,int column=3){
    for(int i=0;i<row;i++){
        if(i%2==0){
            for(int j=0;j<column;j++){
                cout<<arr[j][i];
            }
        }
        else{
            for(int j=0;j<column;j++){
                cout<<arr[column-j][i];
            }
        }
    }
}


int main(){
    int arr[3][3] = {
        {1,2,3},{4,5,6},{7,8,9}
    };
    wave(arr);
    return 0;
}