//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if(intervals.size() ==0){
            return result;
        }


        sort(intervals.begin(),intervals.end());
        // vector<vector<int>> result;
        vector<int> prev = intervals[0];
        for(int i=0;i<intervals.size();i++){ 
            if(prev[1] >= intervals[i][0] ){
                prev[1] = max(prev[1], intervals[i][1]);
            }
            else{
                result.push_back(prev);
                prev = intervals[i];
            }
        }
        result.push_back(prev);
        return result;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends