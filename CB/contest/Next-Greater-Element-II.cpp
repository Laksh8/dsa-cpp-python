#include <bits/stdc++.h> 
using namespace std; 

// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n) { 
    stack<int> s_right;
    stack<int> s_left;
    int *brr = new int[n];
    for(int i=n-1;i>=0;i--){
        while( !s_right.empty() and s_right.top() < arr[i]){
            s_right.pop();
        }
        while( !s_left.empty() and s_left.top() < arr[i]){
            s_left.pop();
        }
        
        brr[i] = (s_right.empty() ? -1 : s_right.top() );
        
        s_right.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<< arr[i] <<", " << brr[i] <<endl;
    }

} 

// The Main Function
int main() {
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

