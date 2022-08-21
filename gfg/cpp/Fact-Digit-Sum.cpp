//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
    void solve(int N,vector<int> &v,long long arr[],bool &flag){
        // base case
        
        if(N==0){
            flag = true;
            return;
        }
        if(N < 0){
            return;
        }
        // recursive case
        for(int i=9;i>=0;i--){
            if(flag){
                return;        
            }
            if(arr[i] <= N){
                v.push_back(i);
                solve(N-arr[i],v,arr,flag);
                if(flag){
                    return;        
                }
                v.pop_back();
            }
        }
    }

	vector<int> FactDigit(int N)
	{
        long long arr[] = {1,1,2,6,24,120,720,5040,40320,362880};
        vector<int> v;
        bool flag = false;
        solve(N,v,arr,flag);
        reverse(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.FactDigit(N);
		for(auto i: ans)
			cout << i;
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends