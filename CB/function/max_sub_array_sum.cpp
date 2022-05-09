#include<iostream>
using namespace std;

int main(){
    int arr[]={10,-33,20,30,40,-90,-60},n=sizeof(arr)/sizeof(int);
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = 0;
            for(int k=i;k<=j;k++){
                temp += arr[k];
            }
            if(max<temp){
                max=temp;
            }
        }
    }
    cout<<max;
    return 0;
}