#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int _=0;_<t;_++){
        int n;
        cin>>n;
        long long arr[n];
        int freq_arr[10]={1};
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            freq_arr[sum%n] += 1;
        }
        int count = 0;
        for(int i=0;i<10;i++){
            if(freq_arr[i] > 1){
                count+= (freq_arr[i]*(freq_arr[i]-1))/2;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}