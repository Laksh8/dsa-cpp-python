#include <bits/stdc++.h> 
using namespace std; 

// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n) { 
    stack<int> s;
    int *brr = new int[n];
    for(int i=0;i<=n;i++){
        while( !s.empty() and s.top() < arr[i]){
            s.pop();
        }
        brr[i] = (s.empty() ? -1 : s.top() );
        
        s.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<< arr[i] <<", " << brr[i] <<endl;
    }

} 

// The Main Function
int main() 
{   // 5 2 0 4 1 3 6 n = 6
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        nextGreater(arr, n); 
    }
	
	return 0; 
} 

