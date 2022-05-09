#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n=10;
    long long s = 15;

    // Code starts METHOD 1
    /*
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=0;
            for(int k=i;k<=j;k++){
                temp+=arr[k];
            }
            if(temp==s){
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }*/

    // Optimizing Code 
    
    int brr[n+1]={0};
    for(int i=1;i<=n;i++){
        brr[i] = brr[i-1] + arr[i-1];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = brr[j+1]-brr[i];
            // cout<<temp<<endl;
            if(temp == s){
                cout<<i+1<<" "<<j+1<<endl;  
            }
        }
    }
    
    // Most Optimized Method Kadane's Algo to find sum of all sub arrays in O(N)
    int temp = arr[0];
    for(int i=1;i<n;i++){
        temp = max(temp+arr[i],arr[i]);
        if(temp==s){
            cout<<"I IS "<<i <<endl;
        }
    }
    

    return 0;
}