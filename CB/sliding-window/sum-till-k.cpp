#include<iostream>
using namespace std;


int f(int arr[],int n,int k){
    int i = 0,j = 0;
    int count = 0;
    int sum = 0;
    while(j<n){
        sum += arr[j];
        
        while(sum>k){
            sum -= arr[i];
            i++;
        }
        if(sum == k){
            count ++;
        }
        j++;
    }
    return count;
}



int main(){

    return 0;
}