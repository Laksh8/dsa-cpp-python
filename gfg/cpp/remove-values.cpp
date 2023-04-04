#include<bits/stdc++.h>
using namespace std;

void f(string s,string &out,stack<char> &stk){
    // base case 
    if(s == ""){
        return ;
    }
    if( !stk.empty() and s[0] == ')'){
        out.push_back(')');
        stk.pop();
    }

    // recursive case
    if(s[0] == '('){
        out.push_back(s[0]);
        stk.push('(');
        f(s.substr(1),out,stk);
    }
    else if (!stk.empty()){
        out.push_back(s[0]);
        // stk.push('(');
        f(s.substr(1),out,stk);
    }
    else{
        f(s.substr(1),out,stk);
    }
}


int main(){
    string s = "xyz(abc)";
    string out = "";
    stack<char> stk;
    f(s,out,stk);
    cout<<out<<")" <<endl;
    cout<<" hello";
    return 0;
}