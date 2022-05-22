#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(int);
    int total = 0;
    int lh_arr[n],rh_arr[n];
    lh_arr[0] = arr[0];
    rh_arr[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        if(arr[i] > lh_arr[i-1]){
            lh_arr[i] = arr[i];
        }
        else{
            lh_arr[i] = lh_arr[i-1];
        }
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i] > rh_arr[i+1]){
            rh_arr[i] = arr[i];
        }
        else{
            rh_arr[i] = rh_arr[i+1];
        }
    }

    for(int i=0;i<n;i++){
        cout<<lh_arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<rh_arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<min(lh_arr[i],rh_arr[i])-arr[i]<<endl;
        total += min(lh_arr[i],rh_arr[i])-arr[i];
    }
    cout<<total<<endl;
    return 0;
}