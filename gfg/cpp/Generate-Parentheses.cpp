//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(int n,int i,string out,vector<string > v){
        // base case
        if(i == n){
            v.push_back(out);
            return;
        }

        // recursive case

        // open bracket

        out.push_back('(');
        solve(n,i+1,out,v);
        out.push_back(')');
        // close bracket
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string > v;
        solve(n,0,"",v);
        return v;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends