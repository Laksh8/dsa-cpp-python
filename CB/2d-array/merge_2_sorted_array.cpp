#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,5};
    int brr[] = {2,3,4,6,9};
    int n = sizeof(arr)/sizeof(int);
    int m = sizeof(brr)/sizeof(int);
    int crr[n+m];
    int i=0,j=0,k=0;
    while(i<n and j<m){
        if(arr[i]<brr[j]){
            crr[k] = arr[i];
            k++;
            i++;
        }else{
            crr[k] = brr[j];
            k++;
            j++;
        }
    }

    while(j<m){
        crr[k] = brr[j];
        k++;
        j++;
    }
    while(i<n){
        crr[k] = arr[i];
        k++;
        i++;
    }

    for(int i=0;i<m+n;i++){
        cout<<crr[i]<<" ";
    }
    return 0;
}   