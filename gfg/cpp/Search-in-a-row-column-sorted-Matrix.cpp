//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        for(int i=0;i<n;i++){
            if(x <= matrix[i][m-1]){
                int start=0;
                int end=m-1;
                while(true){
                    int mid = start + (end-start)/2;
                    
                    if(matrix[i][mid] == x){
                        return true;
                    }
                    else if(matrix[i][mid] > x){
                        end = mid -1;
                    }
                    else{
                        start = mid+1;
                    }
                    
                    if(start > end){
                        break;
                    }
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {

 		int n, m;
    	cin>> n>> m;
        vector<vector<int> > matrix(n);
            
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        int x;
        cin>>x;
        Solution obj;
        if (obj.search(matrix,n,m,x)) 
            cout << "1\n"; 
        else
            cout << "0\n"; 
    }
	return 0; 
} 


// } Driver Code Ends