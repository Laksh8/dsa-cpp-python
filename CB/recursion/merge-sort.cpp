#include<iostream>
using namespace std;


void merge(int arr[],int s,int m,int e){
    int i=s;
    int j=m+1;

    int brr[100];
    int k = s;
    while(i<=m and j<= e){
        if(arr[i]<arr[j]){
            brr[k] = arr[i];
            k++;
            i++;
        }else{
            brr[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=m){
        brr[k] = arr[i];
        k++;
        i++;
    }
    while(j<=e){
        brr[k] = arr[i];
        j++;
        k++;
    }

    for(int i=s;i<=e;i++){
        arr[i] = brr[i];
    }
}



void mergeSort(int arr[],int start,int end){

    // Base condition
    if(start>=end){
        return;
    }

    // recursive case 
    int mid = start + (end-start)/2;

    // sort the sub arrays 
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    // 3). merge 2 sorted sub arrays
    merge(arr,start,mid,end);

}



int main(){
    int arr[] = { 20,30,10,60,50,40 };
    int n = sizeof(arr)/sizeof(int);
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}