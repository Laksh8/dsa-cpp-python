//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum = 0;
        int j=0 ,i = 0;
        int sub_arr = 0;
        while(j < N){
            if(sum == K){
                sub_arr = max(sub_arr,j-i);
            }
            if(sum < K){
                sum += A[j];
            }
            
            while(sum > K ){
                sum -= A[i];
                i++;
            }
            j++;
        }

        return sub_arr;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends