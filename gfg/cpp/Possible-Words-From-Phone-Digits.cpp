//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.

    vector<string> s = {
        "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    };

    void solve(int a[],int N,int index,string out,vector<string> &v){

        // base case
        if(N == index){
            v.push_back(out);
            return;
        }


        // recursive case
        string val = s[a[index]];
        for(int i=0;i<val.size();i++){
            out.push_back(val[i]);
            solve(a,N,index+1,out,v);
            out.pop_back();
        }
    }

    vector<string> possibleWords(int a[], int N)
    {
        vector<string > v;
        solve(a,N,0,"",v);
        return v;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends