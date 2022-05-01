#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    cout<<"Enter Elements in a array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Sorting Starts";
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 and temp < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    cout<<"Sorting ENDS"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}