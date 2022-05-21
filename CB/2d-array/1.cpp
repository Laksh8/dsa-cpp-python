#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    int m = 3;
    int n = 4;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}