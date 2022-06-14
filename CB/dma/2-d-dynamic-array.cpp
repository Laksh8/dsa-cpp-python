#include<iostream>
using namespace std;

int main(){
    int m = 5;
    int n = 4;
    int count =1;
    // 2-d dynamic array 
    int** arr = new int*[m];
    for(int i=0;i<m;i++){
        arr[i] = new int[n];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;arr[i][j]=count++,j++);
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;cout<<arr[i][j]<<"\t",j++);
        cout<<endl;
    }
    return 0;
}