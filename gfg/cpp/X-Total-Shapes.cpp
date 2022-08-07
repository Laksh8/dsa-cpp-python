//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    void remove_shape(vector<vector<char>>& grid,int n,int m,int i,int j){
        // base case
        if(i<0 or i>n or j<0 or j>m){
            return;
        }

        if( grid[i][j] != 'X' ){
            return;
        }

        // recursive case
        if(grid[i][j] == 'X'){
            grid[i][j] = 'O';
        }
        remove_shape(grid,n,m,i+1,j);
        remove_shape(grid,n,m,i,j+1);
        remove_shape(grid,n,m,i-1,j);
        remove_shape(grid,n,m,i,j-1);
    }

    int xShape(vector<vector<char>>& grid) 
    {
        // check for shape 
        int count = 0;

        int n = grid.size();
        for(int i=0;i<n;i++){
            int m = grid[i].size();
            for(int j=0;j<m;j++){
                if( grid[i][j] == 'X' ){
                    // cout<<" VALUE "<<i<<" "<<j<<endl;
                    count ++;
                    remove_shape(grid,n-1,m-1,i,j);
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends