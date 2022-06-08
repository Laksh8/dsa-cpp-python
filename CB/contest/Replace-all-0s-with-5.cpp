#include<iostream>
using namespace std;

void replace(string &s,int n){
    // base case
    if(s[n]=='\0'){
        return;
    }

    // recursive case
    if(s[n] == '0'){
        s[n] = '5';
    }
    replace(s,n-1);
}

int main(){
    string str;
    cin>>str;
    replace(str,str.size()-1);
    cout<<str<<endl;
    return 0;
}