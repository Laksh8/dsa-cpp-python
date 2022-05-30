#include<iostream>
using namespace std;


int check_sorted(int arr[],int n){
    // Base condition
    if(n<=0){
        return 1;
    }

    if(arr[n]<arr[n-1]){
        return 0;
    }

    //recursion
    return check_sorted(arr,n-1);
}


int main(){
    int arr[] = {1,2,5,4,5};
    int n = 5;
    cout<<check_sorted(arr,n-1);
    return 0;
}