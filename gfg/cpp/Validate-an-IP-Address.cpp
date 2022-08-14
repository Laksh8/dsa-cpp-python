//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:

        int reverse(int num){
            int number = 0;
            while(num){
                number = number*10 + num%10;
                num/=10;
            }
            return number;
        }
        int isValid(string s) {
            int n = s.size();
            int count = 0;
            int temp = -1;
            string p = s;
            int i = 0;
            int value = 0;
            while(p[i] != '.'){
                value+= p[i] -'0';
                i++;
            }

            if(value == 0){
                return 0;
            }
            value = 0;
            for(int i=n-1;p[i]!='.';i--){
                value += p[i] - '0';
            }
            if(value == 0){
                return 0;
            }

            for(int i=n-1;i>=0;i--){
                if(s[i]!= '.'){
                    // cout<<"hello"<<endl;
                    if(temp == -1){
                        temp = 0;
                    }
                    temp = temp*10 + s[i]-'0';
                    
                }else{
                    count ++;
                    // cout<<"VALUE "<<temp<<endl;
                    temp = reverse(temp);
                    if(temp>255 or temp<0){
                        return 0;
                    }
                    temp = -1;
                }
            }
            // cout<<"Count :"<<count<<endl;
            if(count != 3){
                return 0;
            }
            return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends