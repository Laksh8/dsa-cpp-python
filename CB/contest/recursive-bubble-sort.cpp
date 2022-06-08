#include<iostream>
using namespace std;

void bubbleSort(int arr[],int i,int n){
    // base case
    if(n==0){
        return;
    }
    // recursive case
    if(i==n){
        bubbleSort(arr,0,n-1);
    }else{
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        bubbleSort(arr,i+1,n);
    }

}


int main(){
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0;i<n;cin>>arr[i],i++);
    bubbleSort(arr,0,n-1);
    for(int i=0;i<n;cout<<arr[i]<<" ",i++);
    return 0;
}