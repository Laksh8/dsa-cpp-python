#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int minCoins(int n,vector<int> c){
    // look up
    
    
    // base case
    if(n == 0){
        return 0;
    }



    // recursive case

    int ans = INT_MAX;
    for(int j=0;j<c.size();j++){
        if(n >= c[j] ){
            ans = min(ans,minCoins( n-c[j], c ));
        }
    }

    return ans == INT_MAX? INT_MAX : ans + 1;

}


int minCoinsTopDown(int n,vector<int> c,vector<int> &dp){
    // look up
    if(dp[n]!= -1){
        return dp[n];
    }
    
    // base case
    if(n == 0){
        return dp[n] = 0;
    }



    // recursive case

    int ans = INT_MAX;
    for(int j=0;j<c.size();j++){
        if(n >= c[j] ){
            ans = min(ans,minCoins( n-c[j], c ));
        }
    }

    return ans == INT_MAX ? dp[n] =  INT_MAX : dp[n] = ans + 1;

}


int minCoinsBottomUp(int n,vector<int> c){
    vector<int> c;
    vector<int> dp(n+1);

    dp[0] = 0;

    for(int i=0;i<=n;i++){
        
        int ans = INT_MAX;
        for(int j=0;j<c.size();j++){
            if(i - c[j] >= 0  ){
                ans = min(ans,dp[ i-c[j]]);
            }
        }

        dp[i] =  ans == INT_MAX ? dp[n] =  INT_MAX : dp[n] = ans + 1;
    }

    return dp[n];

}


int main(){

    return 0;
}