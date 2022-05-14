#include<iostream>
#include<cmath>
using namespace std;


void sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 and temp < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    sort(arr,n);
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == t){
                    cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
                }
            }
        }
    }

    return 0;
}