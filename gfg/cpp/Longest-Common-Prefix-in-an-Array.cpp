//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N){
        int index = 0;
        string out;
        string value = arr[0];

        for(int i=0;i<value.size();i++){
            for(int j=0;j<N;j++){
                if(arr[j][i] != value[i]){
                    return out.size() > 0 ? out : "-1";
                }
            }
            out.push_back(value[i]);
        }
        return out.size() > 0 ? out : "-1";

    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends