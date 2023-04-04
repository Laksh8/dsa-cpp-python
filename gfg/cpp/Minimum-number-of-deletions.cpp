//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends



bool checkPalindrome(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}


void del(string s,int n,int i,int &count,int &min_count,string out){
    
    // base case
    if(i >= n){
        if(checkPalindrome(out) and count < min_count){
            min_count = count;
        }
        return;
    }
    
    
    
    
    
    // recursive case
    // cout<<"Recursion called"<<endl;
    count ++;
    del(s,n,i+1,count,min_count,out);
    out.push_back(s[i]);
    count--;
    del(s,n,i+1,count,min_count,out);
    out.pop_back();
}


int minDeletions(string str, int n) { 
    
    int count = 0;
    int min_count = INT_MAX;
    del(str,n,0,count,min_count,"");
    return min_count;
    
} 