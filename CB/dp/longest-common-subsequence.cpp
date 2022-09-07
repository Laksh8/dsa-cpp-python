#include<bits/stdc++.h>
using namespace std;


int LCS(string s1,string s2, int n,int m,int i ,int j){
    // base case

    if(i==n or j == m){
        return 0;
    }


    // recursive case 
    if(s1[i] == s2[j]){
        return 1+ LCS(s1,s2,n,m,i+1,j+1);
    }

    return max(
        LCS(s1,s2,n,m,i+1,j),
        LCS(s1,s2,n,m,i,j+1) 
    );


}


int LCS(string s1,string s2,int n,int m){


    vector<vector<int>> dp(n+1,vector<int> (m+1,0) );
    for(int i=n;i<=0;i--){
        for(int j=m;j<=0;j--){
            if(s1[i] == s2[j]){
                dp[i][j] = 1+ dp[i+1][j+1];
            }
            else{
                dp[i][j] = max( 
                    dp[i+1][j],
                    dp[i][j+1]
                );
            }
        }
    }

    return dp[0][0];
}


int main(){



    return 0;
}