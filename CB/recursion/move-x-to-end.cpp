#include<iostream>

using namespace std;


string f(string str){
    if(str==""){
        return str;
    }

    string substr = str.substr(1);

    string subStrMyfriend = f(substr);
    
    string ch = str.substr(0,1);
    if(ch=="x"){
        return subStrMyfriend+ch; 
    }else{
        return ch+subStrMyfriend;
    }
}

int main(){

    string str;
    cin>>str;
    cout<<f(str);
    return 0;
}