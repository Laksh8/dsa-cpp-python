//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    long long Sol(vector<int> arr, int n,int i) {
	    // base case
        if(n==i){
            return 1;
        }
        // recursive case
        int X = Sol(arr,n,i+1)*arr[i];
        int Y = Sol(arr,n,i+1);
        return max(X,Y);

	}

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
        return Sol(arr,n,0);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends