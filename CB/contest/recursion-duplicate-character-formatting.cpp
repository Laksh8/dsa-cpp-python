#include<iostream>
using namespace std;

void duplicate(string str,int n){
    // base case
    if(n==-1){
        return;
    }
    
    // recursive case
    duplicate(str,n-1);
    cout<<str[n];
    if(str[n] == str[n+1]){
        cout<<"*";
    }
}



int main(){
    string str;
    cin>>str;
    
    duplicate(str,str.size()-1);
    return 0;
}