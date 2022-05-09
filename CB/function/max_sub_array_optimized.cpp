#include<iostream>
using namespace std;

int main(){
    int arr[]={10,-33,20,30,40,-90,-60},n=sizeof(arr)/sizeof(int);
    int max=INT_MIN;
    int brr[n+1];
    brr[0] = 0;
    for(int i=1;i<=n;i++){
        brr[i] = brr[i-1] + arr[i-1];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = brr[j+1] - brr[i];
            if(max<temp){
                max=temp;
            }
        }
    }
    cout<<max;
    return 0;
}