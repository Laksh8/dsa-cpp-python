#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = arr[i]*arr[i];
    }
    sort(arr, arr + n);

    for(int i=0;i<n; cout<<arr[i]<<" " , i++);
    return 0;
}