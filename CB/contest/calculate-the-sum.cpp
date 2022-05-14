#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n; cin>>arr[i], i++);
    long long int x;
    cin>>x;
    for(int _=0;_<x;_++){
        int q;
        cin>>q;
        if(q==0){
            for(int i=0;i<n;i++){
                arr[i] = arr[i]+arr[i];
            }
            for(int i=0;i<n;i++){
               cout<<arr[i]<<" ";
            }
            cout<<endl;
        }else{
            int temp = arr[n-1];
            for(int i=n-1;i>-1;i--){
                if(i==0)
                    arr[i] = arr[i]+temp;
                else
                    arr[i] = arr[i] + arr[i-1];                    
            }

            for(int i=0;i<n;i++){
               cout<<arr[i]<<" ";
            }cout<<endl;

        }
    }
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    cout<< sum % 1000000007;

    return 0;
}