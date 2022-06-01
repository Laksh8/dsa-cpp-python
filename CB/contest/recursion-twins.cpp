#include<iostream>

using namespace std;

int arr[26];

void f(string str,int n){
    // base case
    if(n==-1){
        return;
    }
    
    // recursive case
    arr[str[n]-'A'] += 1;
    f(str,n-1);
}


int main(){

    string str;
    cin>>str;
    int n = str.size();
    f(str,n-1);
    int count = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>1){
            count += arr[i]-1;
        }
    }
    cout<<count;

    return 0;
}