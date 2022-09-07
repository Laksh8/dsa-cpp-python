//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int arr1[], int arr2[], int n) {
        int f = 0;int s = 0;
        int val = n;
        int sum = 0;
        for(int i=0;i<=n;i++){
            if(arr1[f] < arr2[s]){
                if(val == 1 or val == 0 ){
                    sum+=arr1[f];
                }
                f++;
            }
            else{
                if(val == 1 or val == 0){
                    sum+=arr2[s];
                }
                s++;
            }
            val --;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends