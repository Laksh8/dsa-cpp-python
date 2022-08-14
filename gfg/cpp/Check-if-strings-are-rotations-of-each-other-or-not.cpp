//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1.size() != s2.size()){
            return false;
        }
        
        int n = s1.size();
        for(int i=0;i<n;i++){
            if(s1 == s2){
                return true;
            }
            char ch = s1[0];
            s1 = s1.substr(1);
            s1.push_back(ch);
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends