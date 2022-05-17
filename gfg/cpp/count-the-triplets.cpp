#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;cin>>arr[i],i++);
    
    sort(arr,arr+n);
    
    int count = 0;
    int brr[1000];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            brr[i] = arr[i]+arr[j];
        }
    }

    for(int i=0;i<n;i++){

        for(int k=j+1;k<n;k++){
            if(arr[k] == arr[i]+arr[j]){
                count+=1;
            }
        }
    }

    cout<<count;
    return 0;
}