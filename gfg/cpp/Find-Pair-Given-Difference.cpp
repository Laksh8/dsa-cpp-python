//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool binary_search(int arr[],int end,int value,int start){
    while(start<=end){
        int mid = (end - start) / 2 + start;
        if(arr[mid] == value){
            return true;
        }
        else if(arr[mid] > value){
            end = mid-1;
        }else{
            start = mid +1;
        }
    }
    return false;
}

bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    
    for(int i=0;i<n-1;i++){
        int value = n + arr[i];
        
        if(binary_search(arr,size,value,i+1)){
            return true;
        }
    }
    return false;
}