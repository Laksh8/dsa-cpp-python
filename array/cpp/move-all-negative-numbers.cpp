#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,start=0;

    cout<<"Enter Elements in an Array : ";
    cin>>n;
    int arr[n-1];
    int end = n-1;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=0){
            arr[start] = x;
            start++;
        }else{
            arr[end] = x;
            end--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    

}