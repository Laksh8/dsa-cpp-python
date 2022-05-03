#include<iostream>
using namespace std;

// Configuration for input is pending


int main(){
    long long arr[100000];
    unsigned long long int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Sorting Starts
    for(int i=0;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 and temp<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    //Sorting ends 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}