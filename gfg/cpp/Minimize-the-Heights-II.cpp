//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        int mn = INT_MAX;
        int mx = INT_MIN;

        for(int i=0;i<n;i++){
            if(arr[i] < mn){
                mn = arr[i];
            }

            if(arr[i] > mx){
                mx = arr[i];
            }
        }


        int avg = (mx+mn) /2;

        for(int i=0;i<n;i++){
            if(arr[i] < avg){
                arr[i] += k;
            }
            else{
                arr[i] -= k;
            }
        }

        mn = INT_MAX;
        mx = INT_MIN;

        for(int i=0;i<n;i++){
            if(arr[i] < mn){
                mn = arr[i];
            }

            if(arr[i] > mx){
                mx = arr[i];
            }
        }

        return mx-mn;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends