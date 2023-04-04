//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Write your code here 
        // sort(A,A+n);
        // sort(B,B+m);


        long long sum1 = 0;
        for(int i=0;i<n;i++){
            sum1 +=A[i];
        }

        long long sum2 = 0;
        for(int i=0;i<m;i++){
            sum2 +=B[i];
        }

        int diff = abs(sum1-sum2);
        int i=0,j=0;
        if(diff == 0){
            return 1;
        }
        while(i<n and j<m){
            if(A[i] + B[j] == diff){
                return 1;
            }
            if(A[i]<B[j]){
                j++;
            }else{
                i++;
            }
        }

        return -1;


	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends