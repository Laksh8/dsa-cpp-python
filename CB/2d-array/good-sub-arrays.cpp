#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,6,5,2,4,3};
    int n = sizeof(arr)/sizeof(int);
    int sum = 0;
    int arr_freq[n] = {};
    for(int i=0;i<=n;i++){
        arr_freq[sum%n]++;
        cout<<sum<<" mod : "<<(sum%n)<<",";
        sum+=arr[i];
    }cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr_freq[i]<<" ";
    }
    return 0;
}