//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> m;
        int s = 0;
        int max_count = 0;
        for(int i=0;i<n;i++){
            s += A[i];
            if(A[i] == 0 and max_count == 0){
                max_count = 1;
            }
            if(s==0){
                max_count = i+1;
            }
            if(m.find(s) != m.end() ){
                max_count = max(max_count,i-m[s]);

            }else{
                m[s] = i;
            }
        }
        return max_count;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends