//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        // algo find the sum of an array 
        if(n==1){
            return 1;
        }
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum += a[i];
        }

        long long sum_sofar = 0;
        for(int i=0;i<n;i++){
            if(sum-a[i] == sum_sofar){
                return i-1;
            }
            else{
                sum_sofar += a[i];
            }
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends