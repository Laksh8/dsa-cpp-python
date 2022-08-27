//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    int solution(int n,int i){
        // base case
        if(i >= n){
            return 0;
        }

        // recursive case
        return 1 +solution(n, i+1);



    }

    int countFriendsPairings(int n) 
    { 
        solution(n,0);
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
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends