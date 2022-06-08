#include<iostream>
using namespace std;


int countWays(int n,int k){
    // base case
    if(n==0){
        return 1;
    }

    // recursion 
    int count = 0;
    for(int j=1;j<=k;j++){
        if(n-j>=0){
            count+= countWays(n-j,k);
        }
    }
    return count;
}


int main(){
    int n,k;
    cin>>n>>k;
    cout<<countWays(n,k)<<endl;
    return 0;
}