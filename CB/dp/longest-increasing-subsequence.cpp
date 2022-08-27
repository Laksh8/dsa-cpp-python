#include<bits/stdc++.h>
using namespace std;


int f(vector<int> v,int n,int i){

    // base case

    if(i==n){
        return 0;
    }

    // recursive case
    int ans = 0;
    for(int j = i+1;j<n;j++){
        if(v[j]>= v[i]){
            ans = max(ans,f(v,n,j));
        }
    }

    return 1+ ans;
}



int main(){

    return 0;
}