#include<iostream>
using namespace std;


void function(int brr[],int n){
    for(int i=0;i<n;i++){
        brr[i]++;
    }
}


int main(){
    int n=5;
    int arr[] = {1,2,3,4,5};
    function(arr,n);
    for(int i=0;i<n;cout<<arr[i]<<" ",i++);
    return 0;
}