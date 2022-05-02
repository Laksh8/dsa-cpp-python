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
        for(int j=1;j<n-i;j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }

    //Sorting ends 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}