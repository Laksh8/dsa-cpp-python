#include<iostream>
using namespace std;


int foundAt(int arr[],int n,int target){
    // Base Case
    if(n==-1){
        return n;
    }
    if(arr[n] == target){
        return n;
    }
    // recursion case 
    return foundAt(arr,n-1,target);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; cin>>arr[i] , i++);
    int target;
    cin>>target;
    cout<<foundAt(arr,n-1,target)<<endl;
    return 0;
}