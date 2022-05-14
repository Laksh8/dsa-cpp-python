#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for( int _=0;_<t;_++ ){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int p;
        cin>>p;
        sort(arr,arr+n);
        int v1,v2;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j] == p ){
                    v1=arr[i];
                    v2=arr[j];
                }
            }
        }
        cout<<"Deepak should buy roses whose prices are "<<v1<<" and "<<v2<<"."<<endl;
    }
    return 0;
}