#include<iostream>
using namespace std;


bool binary_search_recur(int arr[],int start,int end,int target){

    // base case
    if(start>end){
        return false;
    }
    // recursive case
    int mid = start + (end - start)/2;
    if(arr[mid] == target){
        return true;
    }
    else if(arr[mid] > target){
        // move left
        return binary_search_recur(arr,start,mid-1,target);
    }
    else{
        // move right
        return binary_search_recur(arr,mid +1,end,target);
    }
}

bool binary_search(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    while(true){
        int mid = start + (end-start)/2;
        cout<<arr[mid] <<" ";
        if(arr[mid] == target){
            return true;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }else{
            start = mid+1;
        }
        if(start>end){
            return false;
        }
    }

}


int main(){
    int arr[100][100];
    int n;
    int target;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cin>> target;

    bool exists = false;
    for(int i=0;i<n;i++){
        if(arr[i][0] <= target and arr[i][n-1] >= target){
            exists = binary_search_recur(arr[i],0,n-1,target);
        }
    }
    cout<<exists;
    return 0;
}