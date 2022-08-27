//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:

    void solution(int coins[], int N,int index, int sum,long long &count){
        
        // base case
  
        if(sum == 0){
            count++;
            return;
        }
        if(sum < 0){
            return;
        }
        // recursive case
        for(int i=index;i<N;i++){
            solution(coins,N,i,sum-coins[i] , count);
        }
    }
    
    long long int count(int coins[], int N, int sum) {
        long long cn = 0;
        solution(coins,N,0,sum,cn);
        return cn;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends