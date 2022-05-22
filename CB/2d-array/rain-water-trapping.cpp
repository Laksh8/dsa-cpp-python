#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(int);
    int total = 0;
    for(int i=0;i<n;i++){
        int lh = arr[i];
        for(int j=i-1;j>=0;j--){
            lh = max(arr[j],lh);
        }
        int rh = arr[i];
        for(int j=i+1;j<n;j++){
            rh = max(arr[j],rh);
        }
        total += min(lh,rh) - arr[i];
    }
    cout<<total<<endl;
    return 0;
}