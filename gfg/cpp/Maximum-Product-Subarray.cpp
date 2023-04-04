//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	long long maxProduct(vector<int> arr, int n) {
        long long prod = INT_MIN;
        long long new_prod = 1;
        int start=0;
        int zero_count=0;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                zero_count++;
                continue;
            }
            new_prod *= arr[i];
            // cout<<new_prod<<endl;
            if(new_prod>prod){
                prod = new_prod;
            }

            if( i+1<n and arr[i+1] == 0){
                while(start<i){
                    if(arr[start] == 0){
                        start++;
                        zero_count++;
                        continue;
                    }
                    new_prod /= arr[start];
                    if(new_prod>prod){
                        prod = new_prod;
                    }
                    start++;
                }
                start = i;
            }
        }
        return prod < 0 and zero_count ? 0 :prod;
    }

	// long long maxProduct(vector<int> arr, int n) {
    //     int start = 0;
    //     int end = 0;
    //     long long prod = INT_MIN;
    //     long long new_prod = 1;
    //     while(start<n and end<n){
    //         if(new_prod > prod){
    //             prod = new_prod;
    //         }
    //         if(arr[end] != 0)
    //             new_prod = new_prod * arr[end];
    //         end++;
    //         if(arr[end] == 0){
    //             while(start!= end and start<n and end<n and arr[start] != 0 ){
    //                 if(new_prod > prod){
    //                     prod = new_prod;
    //                 }
    //                 new_prod = new_prod / arr[start];
    //                 start++;
    //             }
    //             start = end+1;
    //             end = end+1;
    //         }
    //     }

    //     return prod;
	// }
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