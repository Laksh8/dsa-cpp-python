//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:

    int check(int value){
        int count = 0;
        int i=1;
        int perfect_squar = 0;
        while(i*i<=value){
            if(i*i == value){
                perfect_squar = 1;
            }
            if(value%i==0){
                count++;
            }
            i++;
        }
        return (count*2)-perfect_squar;
    }

    long long int nineDivisors(long long int N){
        int count = 0;
        for(int i=1;i<=N;i++){
            if(check(i) == 9){
                count++;
            }    
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.nineDivisors(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends