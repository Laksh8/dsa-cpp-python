#include<iostream>

using namespace std;



int f(string str,int n){
    // base case
    if(n==-1){
        return 0;
    }

    // recursive case
    return f(str,n-1)*10 + (str[n] - '0');
}



int main(){

    string str;
    cin>>str;
    cout<<f(str,str.size()-1)<<endl;
    return 0;
}