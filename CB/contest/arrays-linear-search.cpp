#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long arr[n];
    
    for(int i=0;i<n; cin>>arr[i],i++);

    int t;
    cin>>t;
    int flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            cout<<i;
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<-1;
    }
    return 0;
}