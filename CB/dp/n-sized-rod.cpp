#include<iostream>
#include<climits>
#include<vector>

using namespace std;


int maxProfitTopDown(int n,vector<int> p , vector<int>&dp){
    
    // look up
    if(dp[n]!= -1){
        return dp[n];
    }
    
    
    // base case
    if(n==0){
        return dp[n]=0;
    }


    // recursive case

    int ans=INT_MIN;
    for(int i=1;i<=n;i++){
        ans = max(ans,p[i-1]+maxProfitTopDown(n-i,p,dp));
    }

    return dp[n] = ans;
}


int maxProfitBottomUp(vector<int> p ){

    int n = p.size();
    vector<int> dp(n+1);

    dp[0] = 0;

    for(int i=1;i<=n;i++){
        int mx = INT_MIN;
        for(int j=0;j<=i;j++){
            mx = max(mx,p[j-1]+dp[i-j]);
        }

        dp[i] = mx;
    }
    return dp[n];
}




int main(){

    vector<int> v = {};

    return 0;
}