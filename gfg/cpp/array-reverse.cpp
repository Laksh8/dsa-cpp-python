#include<bits/stdc++.h>
using namespace std;


// void swap(int &a,int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }


void reverse(int arr[],int n){

    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }


}


int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // reverse(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    int a=5,b=10;
    swap(a,b);
    cout<<"A:"<<a<<endl<<"B:"<<b;

    return 0;
}