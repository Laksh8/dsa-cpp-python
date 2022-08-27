//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int solution(int W, int wt[], int val[], int n,int i,vector<vector<int>> &dp){
        // base case


        if(i==n or W <= 0){
            return 0;
        }

        // look up 
        if(dp[i][W]!= -1){
            return dp[i][W];
        }

        // recursive case
        int X = 0;
        if(W >= wt[i])
            X = solution( W - wt[i],wt, val, n, i+1,dp) + val[i];
        int Y = solution( W,wt, val, n, i+1,dp);

        return dp[i][W] =  max(X,Y);
    }
    
    int solutionBottomUp(int W, int wt[], int val[], int n){
        vector<vector<int>> dp(n+1,vector<int> (W+1));

        for(int i=0;i<n;i++){
            for(int j=0;j<W;j++){
                
            }
        }

    }
    



    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp(n+1, vector<int>(W+1,-1));
        
        return solution(W,wt, val, n, 0,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends