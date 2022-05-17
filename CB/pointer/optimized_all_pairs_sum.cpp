#include<bits/stdc++.h>
using namespace std;

int pair_count(int arr[],int n,int t){
    int i=0;
    int j=n-1;
    int count = 0;
    while(i<j){
        int sum = arr[i]+arr[j];
        if(sum==t){
            count+=1;
            j--;
            i++;
        }else if(sum>t){
            j--;
        }else{
            i++;
        }
    }
    return count;
}


int main(){
    int arr[100],n;
    cin >> n;
    for(int i=0;i<n;cin>>arr[i],i++);
    sort(arr,arr+n);
    int t;
    cin>>t;
    cout<<pair_count(arr,n,t);
    return 0;
}