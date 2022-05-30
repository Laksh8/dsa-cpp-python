#include<iostream>
using namespace std;


int f(int arr[],int start,int end,int target){
    if(start > end){
        return -1;
    }
    int mid = start+ (end-start)/2;  //  =>  (start+end)/2
    if(arr[mid] == target){
        return mid;
    }else if(arr[mid] > target){
        return f(arr,start,mid-1,target);
    }
    else{
        return f(arr,mid+1,end,target);
    }
}


int main(){
    int arr[] = {0,1,2,3,4,5,6,9,11,13};
    int n = sizeof(arr)/sizeof(int);

    int target=9;
    cout<<f(arr,0,n-1,target)<<endl;
    return 0;
}