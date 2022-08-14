//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxCoins(vector<int>&A,int n)
    {
        int x=0,y=0;
        bool x_turn = false;
        int i=0,j=n-1;
        while(i<=j){
            cout<<i<<" "<<j<<endl<<x<<" "<<y<<endl;
            if(A[i]>A[j]){
                if(x_turn){
                    cout<<"VALUE_X :"<<x<<" " <<A[i]<<endl;
                    x+= A[i];
                    x_turn = false;
                }
                else{
                    cout<<"VALUE_Y :"<<x<<" " <<A[i]<<endl;
                    y+= A[i];
                    x_turn = true;
                }
                i++;
            }else{
                if(x_turn){
                    cout<<"VALUE_X :"<<x<<" " <<A[i]<<endl;
                    x+= A[j];
                    x_turn = false;
                }
                else{
                    cout<<"VALUE_Y :"<<x<<" " <<A[i]<<endl;
                    y+= A[j];
                    x_turn = true;
                }
                j--;
            }
        }
        
        return x;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxCoins(A, N) << "\n";
    }
    return 0;
}

// } Driver Code Ends