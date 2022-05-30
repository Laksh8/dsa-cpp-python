#include<iostream>
using namespace std;


int sum(int arr[],int index,int n){
    if(index>n-1){
        return 0;
    }
    return arr[index] + sum(arr, index+1,n);
    
}




int main(){
    int n = 6;
    int arr[] = {1,2,3,4,5,6};
    cout<<sum(arr,0,n);
    return 0;
}