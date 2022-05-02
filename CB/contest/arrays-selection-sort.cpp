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
    int min_index = 0;
    for(int i=0;i<n;i++){
        min_index=i;    
        for(int j=i;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
    }

    //Sorting ends 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}