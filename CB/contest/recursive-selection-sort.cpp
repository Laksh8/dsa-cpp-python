#include<iostream>
using namespace std;


int min_index(int arr[],int start,int min,int n){
    // base case
    if(start>=n){
        return min;
    }


    // recursive case
    if(arr[start]<arr[min]){
        min = start;
    }
    return min_index(arr,start+1,min,n);
    
}


void selectionSort(int arr[],int start, int n){
    // base case 
    if(start>=n){
        return;
    }

    // recursive case
    // int min = start;
    // for(int i=start; i<n ;i++ ){
    //     if(arr[min] > arr[i]){
    //         min = i;
    //     }
    // }
    int min = min_index(arr,start,start,n);
    swap(arr[start],arr[min]);
    selectionSort(arr,start+1,n);

}



int main(){
    int n;
    int arr[1000];
    cin>>n;
    for(int i=0;i<n;cin>>arr[i],i++);
    selectionSort(arr,0,n);
    for(int i=0;i<n;cout<<arr[i]<<endl,i++);
    return 0;
}