#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int val=0;
        for(int j=0;j<=i;j++){
            cout<<n-j<<" ";
            val = n-j;
        }
        for(int j=1;j<(2*n-1)-2*i;j++){
            cout<<val<<" ";
        }
        for(int j=val;j<n;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    for(int i=n-2;i>=0;i--){
        int val=0;
        for(int j=0;j<=i;j++){
            cout<<n-j<<" ";
            val = n-j;
        }
        for(int j=1;j<(2*n-1)-2*i;j++){
            cout<<val<<" ";
        }
        for(int j=val;j<n;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }


    return 0;
}