#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int _=0;_<t;_++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int lh_arr[n];
        lh_arr[0] = arr[0];
        // cout<<"MAX LEFT"<<endl;
        for(int i=1;i<n;i++ ){
            lh_arr[i] = max(lh_arr[i-1],arr[i]); 
            // cout<<lh_arr[i]<<" ";
        }
        // cout<<endl;
        int rh_arr[n];
        rh_arr[n-1] = arr[n-1];
        // cout<<"MAX RIGHT"<<endl;
        for(int i=n-2;i>=0;i--){
            rh_arr[i] = max(rh_arr[i+1],arr[i]);
            // cout<<rh_arr[i]<<" "; 
        }
        // cout<<endl;
        int total = 0;
        for(int i=0;i<n;i++){
            total += min(lh_arr[i],rh_arr[i]) - arr[i];
        }
        cout<<total<<endl;
    }


    return 0;
}