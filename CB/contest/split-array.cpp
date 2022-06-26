#include<iostream>
using namespace std;


void split_array(int i,int j,int n,int arr[],int &count){
    // base case
    if(i==1){
        return;
    }
    count+=1;
    for(int k=0;k<i;k++){
        cout<<arr[k]<<" ";
    }
    cout<<"and ";
    for(int k=j;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    // recursion case
    split_array(i-1,j-1,n,arr,count);
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    split_array(n-2,n-2,n,arr,count);
    cout<<count;
    return 0;
}