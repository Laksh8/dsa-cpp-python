#include<iostream>
using namespace std;


void merge(long long arr[],long long s,long long e,long long mid){

    long long brr[100];
    long long i=s;
    long long j=mid+1;
    long long k=s;
    while(i<=mid and j<=e){
        if(arr[i] < arr[j]){
            brr[k] = arr[i];
            k++;
            i++;
        }else{
            brr[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
        brr[k] = arr[i];
        i++;
        k++;
    }
    while(j<=e){
        brr[k] = arr[j];
        j++;
        k++;
    }

    for(long long i=s;i<=e;i++){
        arr[i] = brr[i];
    }

}


void mergesort(long long arr[],long long s,long long e){
    // Base case
    if(s>=e){
        return;
    }
    // recursive case
    long long mid = s +(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    // Merge 2 sorted arrays logic
    merge(arr,s,e,mid);
}


int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;cin>>arr[i],i++);
    mergesort(arr,0,n-1);
    for(long long i=0;i<n;cout<<arr[i]<<" ",i++);
    return 0;
}