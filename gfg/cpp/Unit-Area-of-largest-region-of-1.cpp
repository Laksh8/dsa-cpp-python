//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void check(vector<vector <int>> &grid ,int i,int j, int n ,int m, int &count){

        // base case
        if( ( i< 0 or j < 0) or (i >= n or j >= m)){
            return;
        }
        // recursive case
        if(grid[i][j] != 1){
            return;
        }else{
            grid[i][j] = 0;
            count++;
        }
        check(grid,i,j-1,n,m,count);
        check(grid,i,j+1,n,m,count);
        check(grid,i-1,j,n,m,count);
        check(grid,i+1,j,n,m,count);
        
        check(grid,i-1,j-1,n,m,count);
        check(grid,i+1,j-1,n,m,count);        
        check(grid,i-1,j+1,n,m,count);        
        check(grid,i+1,j+1,n,m,count);
    }

    int findMaxArea(vector<vector<int>> grid) {
        // Code here
        int max_count = 0;
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count = 0;
                if(grid[i][j] == 1){
                    check(grid,i,j,n,m,count);
                    max_count = max(max_count,count);
                }
            }
        }
        return max_count;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends