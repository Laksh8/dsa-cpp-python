#include<iostream>
using namespace std;

void f(int arr[],int n,int i,int t){
    // base case
    if(i>n){
        return;
    }

    if(arr[i]==t){
        cout<<i<<" ";
    }

    // recursive case
    f(arr,n,i+1,t);
}



int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;cin>>arr[i],i++);

    int t;
    cin>>t;
    f(arr,n,0,t);
    return 0;
}