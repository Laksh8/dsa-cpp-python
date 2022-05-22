#include<iostream>
using namespace std;

int main(){
    int arr[7] = {1,3,5,7};
    int brr[3] = {2,4,6};
    int n = 4;
    int m = 3;
    int i=n-1,j=m-1,k=m+n-1;
    while(i>=0 and j>=0){
        if(arr[i]>brr[j]){
            arr[k] = arr[i];
            i--;
            k--;
        }else{
            arr[k] = brr[j];
            k--;
            j--;
        }
    }
    if(j>=0){
        while(j>=0){
            arr[k] = brr[j];
            k--;
            j--;
        }
    }


    for(int i=0;i<n+m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}