//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void result(int n,string &out,vector<string> &s){
        // base case
        if(n==-1){
            s.push_back(out);
            return;
        }


        // recursive case
        for(int i=n;i>-1;i--){
            if(out[i] == '0'){
                out[i] = '1';
            }else{
                out[i] = '0';
            }
            result(n,out,s);
        }


    }

    vector<string> graycode(int n)
    {
        //code here
        string out;
        for(int i=0;i<n;i++){
            out.push_back('0');
        }
        vector<string> s;
        result(n,out,s);
        return s;
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
        vector<string> ans= ob.graycode(n);
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
}




// } Driver Code Ends