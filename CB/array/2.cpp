#include<iostream>
using namespace std;

int main(){

    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    int j = n-1;
    for(int i=0;i<n/2;i++,j--){
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}