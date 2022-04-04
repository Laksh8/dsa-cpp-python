#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Size of an Array";
    cin>>n;

    int arr[10];

    cout<<"Enter Element in Array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--){    
        cout<<arr[i]<<" ";
    }
    return 0;
}