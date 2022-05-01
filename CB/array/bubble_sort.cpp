#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Logic for Bubble Sort
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}