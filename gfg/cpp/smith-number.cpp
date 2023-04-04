//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    bool is_prime(int n)
    {
        for (int i = 2; i <= n / i; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }




    int smithNum(int n)
    {
        int i=2;
        int temp = n;
        int sum_prime = 0;
        if(is_prime(n)){
            return 0;
        }
        while(temp > 1 and i<=temp){
            if(temp % i == 0 and is_prime(i)){
                if(i<10)
                    sum_prime+=i;
                else{
                    int value = i;
                    while(value){
                        sum_prime += value %10;
                        value /=10;
                    }    
                }
                temp /=i;
            }
            else{
                i++;
            }
            
        }
        temp = n;
        int sum_digit = 0; 
        while(temp){
            sum_digit += temp%10;
            temp /=10;
        }

        return sum_prime == sum_digit ? 1 : 0 ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends