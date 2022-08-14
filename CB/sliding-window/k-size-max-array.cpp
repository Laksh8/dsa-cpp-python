#include<iostream>
using namespace std;


int k_size(int arr[],int k,int n){
    int sum = 0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int max_sum = sum;

    for(int i=k;i<n;i++){
        sum += arr[i];
        sum -= arr[i-k];
        if(max_sum < sum){
            max_sum = sum;
        }
    }
    

    return max_sum;

}


int main(){
    int arr[] = {1,4,2,7,6,3,5};
    int n = 7;
    int k = 3;
    cout<<k_size(arr,k,n)<<endl;

    return 0;
}