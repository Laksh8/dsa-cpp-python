/*
https://www.spoj.com/problems/AGGRCOW/
*/

#include<iostream>
#include<climits>
#include<algorithm> 
using namespace std;



bool canplace(int arr[],int stall,int cow,int m){
    int numOfCows = 1;
    int prevCowPosition = arr[0];
    for(int i=0;i<stall;i++){
        if(arr[i] - prevCowPosition>=m){
            numOfCows ++;
            prevCowPosition = arr[i];
            if(numOfCows == cow){
                return true;
            }
        }
    }
    return false;
}




int binary_search(int arr[],int stall,int cow,int lower,int upper,int previous){
    // base case
    if(lower>upper){
        return previous;
    }


    // recursive case
    int mid = lower + (upper-lower)/2;
    if(canplace(arr,stall,cow,mid)){
        previous = mid;
        return binary_search(arr,stall,cow,mid+1, upper,previous);
    }else{
        return binary_search(arr,stall,cow,lower, mid-1,previous);
    }
}


int main(){
    int t;
    cin>>t;
    for(int _=0;_<t;_++){
        int stall,cow;
        cin>>stall>>cow;
        int arr[stall];
        for(int i=0;i<stall;cin>>arr[i],i++);
        sort(arr,arr+stall);
        int lower=INT_MAX;
        int upper=arr[stall-1] - arr[0];
        for(int i=1;i<stall;i++){
            if(arr[i]-arr[i-1]<lower){
                lower = arr[i]-arr[i-1];
            }
        }
        int prev = binary_search(arr,stall,cow,lower,upper,0);
        cout<<prev<<endl;

    }
    return 0;
}