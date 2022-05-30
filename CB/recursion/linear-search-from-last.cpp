#include<iostream>
using namespace std;


int f(int arr[],int n,int target){
    //Base Condition
    if(n==-1){
        return n;
    }
    else if(arr[n]==target){
        return n;
    }
    
    // recursion
    return f(arr,n-1,target);
}


int main(){
    int arr[] = {0,1,2,3,4,5,0,3,4,2};
    int n = sizeof(arr)/sizeof(int);
    int target;
    cin>>target;
    cout<<f(arr,n-1,target)<<endl;
    return 0;
}