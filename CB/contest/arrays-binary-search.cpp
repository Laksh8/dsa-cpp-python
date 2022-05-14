#include<iostream>
using namespace std;

int main(){

    unsigned long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int t;
    cin>>t;
    bool flag=true;
    long long start=0,end=n-1;
    while(start<end){
        long long index = (start+end)/2;
        if(arr[index]==t){
            cout<<index;
            flag=false;
            break;
        }
        else if(arr[index]<t){
            start = index+1;
        }else{
            end = index-1;
        }
    }
    if(flag){
        cout<<-1;
    }
    return 0;
}