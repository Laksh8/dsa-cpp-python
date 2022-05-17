#include<iostream>
using namespace std;



int count_pairs(int arr[],int n,int target){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(target == arr[i] + arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){

    int arr[] = {10,20,30,40,50,0};
    int n=6;
    int target = 50;

    cout<<count_pairs(arr,n,target);

    return 0;
}