//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        
        int jumps = 0;
        int count = 0;
        while( jumps <= n-1 ){
            int mx = INT_MIN;
            for(int i=jumps;i<jumps + arr[jumps];i++){
                if(mx < arr[jumps]){
                    mx = arr[jumps];
                }
            }
            jumps+=mx;
            count +=1;
        }
        return count;

    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends