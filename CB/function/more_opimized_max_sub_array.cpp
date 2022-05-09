#include<iostream>
using namespace std;

// KADANE's ALGO

int main(){
    int arr[]={10,-33,20,-50,30,-10,-15,40,-90,-60},n=sizeof(arr)/sizeof(int);
    int temp = arr[0];
    int max_value;
    for(int i=1;i<n;i++){
        max_value = max(max_value + arr[i],arr[i]);
        if(temp<max_value){
            temp = max_value;
        }
    }
    cout<<temp;
    return 0;
}