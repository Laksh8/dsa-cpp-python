#include<iostream>
using namespace std;


void check(string s,string out=""){
    // base case
    if(s.empty()){
        cout<<out<<endl;
        return;
    }
    // recursive case
    int n = s.size();
    for(int i=0;i<n;i++){
        out.push_back(s[i]);

        s = s.substr(i) + s.substr(0,i);

        check(s.substr(1),out);
        out.pop_back();
    }
}


int main(){

    string s = "abc";

    check(s);
    return 0;
}