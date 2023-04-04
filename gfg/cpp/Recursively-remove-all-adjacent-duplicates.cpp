//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
// abcccccccccccbcccccccba
// abccbccba

class Solution{
public:
    bool remove(string &s){
        int i=0;
        int j=1;
        bool flag = false;
        while(i<s.size() and j<s.size()){
            if(s[i] == s[j]){
                flag = true;
                while(s[i] == s[j]){
                    j++;
                }
                s = s.substr(0,i) + s.substr(j);
                j = i+1;
            }else{
                i++;
                j++;
            }
        }

        return flag;
    }
    string rremove(string &s){
        // base case
        if(s == ""){
            return "";
        }

        // recursive case
        if(remove(s)){
            rremove(s);
        }
        return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends