#include<iostream>
#define ll long long
using namespace std;

ll numberOccurences(ll arr[], ll start, ll end , ll n , ll target ){
    // base case
    if(start>end){
        return -1;
    }

    // recursive
    ll mid = start + (end-start)/2;
    if(arr[mid] == target){
        ll count=1;
        ll j = mid-1;
        ll i = mid+1;
        while(arr[i] == target and i<n ){
            count ++;
            i++;
        }
        while(arr[j] == target and j>-1){
            count++;
            j--;
        }
        return count;
    }else if(arr[mid] > target){
        return numberOccurences(arr,start,mid-1,n,target);
    }
    else{
        return numberOccurences(arr,mid+1,end,n,target);
    }
}

int main(){

    ll n, x;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout<<numberOccurences(arr,0,n-1,n,x)<<endl;
    return 0;
}