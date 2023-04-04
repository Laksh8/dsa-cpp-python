//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void reverse_stack(stack<int>&s,stack<int> &rev){
        // base case

        if(s.empty()){
            return;
        }

        // recursive case
        
        rev.push(s.top());
        s.pop();
        reverse_stack(s,rev);
    }
    stack<int> Reverse(stack<int> St){
        // write you code 
        stack<int> rev;
        reverse_stack(St,rev);
        return rev;
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        stack<int> ans=ob.Reverse(St);
        vector<int>res;
        while(ans.size())
        {
            res.push_back(ans.top());
            ans.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends