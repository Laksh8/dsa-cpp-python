#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> f(vector<int> &arr){
    vector<int> brr;
    for(int i=0;i<arr.size();i++){
        brr.push_back(arr[arr[i]]);
    }

    return brr;
}


int main(){
    vector<int> arr = {0,2,1,5,3,4};
    vector<int> brr = f(arr);
    for(int i=0;i<brr.size();cout<<brr[i]<<" " ,i++);
    return 0;
}
