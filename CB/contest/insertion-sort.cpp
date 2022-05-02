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
        int temp = arr[i];
        int j = i;
        while(temp>arr[j-1] and j>0){
            arr[j-1] = arr[j];
            j--;
        }

        temp = arr[j+1];
    }
    //Sorting ends 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}