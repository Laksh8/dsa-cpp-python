#include<bits/stdc++.h>
using namespace std;


void f(vector<int> arr,int n,int t,int index,vector<int > &out,int &count){
    // base case    
    if(t==0){
        // cout<<index <<" " << out.size() <<" : " << out[0] <<endl;
        for(int i=0;i<out.size();i++){
            cout<<out[i]<<" ";
        }
        cout<<" ";
        count++;
        return;
    }


    if(t < 0){
        return; 
    }

    // recursive case
    for(int i=index;i<n;i++){
        // cout<<index<<" "<< i<<" : " << arr[i] << " " << out.size() << " " << t <<endl;
        out.push_back(arr[i]);
        t -= arr[i];
        f(arr,n,t,i+1,out,count);
        t+=arr[i];
        out.pop_back();
    }

}



int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    int count = 0;
    vector<int> out;
    f(arr,n,t,0,out,count);
    cout<<endl<<count<<endl;
    return 0;
}