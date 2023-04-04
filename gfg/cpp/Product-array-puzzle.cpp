//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        //code here
        long long int prod = 1;
        int zero_count = 0;
        int last_index = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                last_index = i;
                zero_count ++;
            }else{
                prod *= nums[i];
            }
        }
        vector <long long int> v(n);
        if(zero_count==0){
            for(int i=0;i<n;i++){
                v[i] = prod/nums[i];
            }
        }else if(zero_count == 1){
            v[last_index] = prod;
        }

        return v;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends