#include<bits/stdc++.h>
using namespace std;


int climbTopDown(int n,int i,vector<int> &dp){
    
    // base case
    if(i>n){
        return 0;
    }
    // look up

    if(dp[i]!= -1){
        return dp[i];
    }
    if(i==n){
        // cout<<endl;
        return dp[i] = 1;
    }

    // recursive case
    int X = climbTopDown(n,i+1,dp);
    int Y = climbTopDown(n,i+2,dp);

    return dp[i] = X+Y;
}



int climbBottomUp(int n){
    vector<int> dp(n+1);
    dp[n] = 1;
    for(int i=n-1;i>=0;i--){
        dp[i] = (i+1 > n ? 0:dp[i+1]) + (i+2 > n ? 0:dp[i+2]);
    }
    return dp[0];
}





int main(){

    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<climbTopDown(n,0,dp)<<endl;
    cout<<climbBottomUp(n)<<endl;

    return 0;   
}

