#include<iostream>
using namespace std;


int foundAt(int arr[],int n,int index,int target){
    // base condition
    if(index>n){
        return -1;
    }

    if(arr[index] == target){
        return index;
    }

    // recersive case
    return foundAt(arr,n,index+1,target);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; cin>>arr[i] , i++);
    int target;
    cin>>target;
    cout<<foundAt(arr,n,0,target)<<endl;
    return 0;
}