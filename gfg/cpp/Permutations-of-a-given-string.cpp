//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:

        void solve(int start,string s,set<string> &se){
            // base case
            if(start==s.size()){
                se.insert(s);
                return;
            }

            // recursive case

            for(int i=start;i<s.size();i++){
                swap(s[i],s[start]);
                solve(start+1,s,se);
            }

        }

		vector<string>find_permutation(string S)
		{
            vector<string > v;
            set<string> se;
            solve(0,S,se);
            for(auto i:se){
                v.push_back(i);
            }
            return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends