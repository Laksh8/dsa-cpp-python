#include<iostream>
#include<climits>
#include<vector>
using namespace std;



int minSteps(int n,vector<int > &dp){
    // lookup
    if(dp[n] != -1){
        return n;
    }


    // base case
    if(n == 1){
        return dp[n] = 0;
    }

    // recursive case

    int X = minSteps(n-1,dp);

    int Y = n%2==0 ? minSteps(n/2,dp) : INT_MAX;
    int Z = n%3==0 ? minSteps(n/3,dp) : INT_MAX;

    return dp[n] = 1+ min(X,min(Y,Z));

}


int minStepsBottomUp(int n){
    vector<int> dp(n+1,-1);

    dp[1] = 0;
    for(int i=2;i<=n;i++){
        int X = dp[i-1];
        int Y = INT_MAX;
        if(i%2 == 0){
            Y = dp[i/2];
        }

        int Z = INT_MAX;
        if(i%3 == 0){
            Z = dp[i/3];
        }
        dp[i] = 1+ min(Z,max(Y,X));
    }

    return dp[n];
}




int main(){

    int n = 6;
    vector<int> dp(n+1,-1);
    cout<<minSteps(n,dp)<<endl;
    cout<<minStepsBottomUp(n)<<endl;
    return 0;
}