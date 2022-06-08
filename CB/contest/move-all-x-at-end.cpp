#include<iostream>
using namespace std;

string move(string str){
    // base case
    if(str==""){
        return "";
    }
    // recursive case

    string substring = str.substr(1);
    string stringfromfriend = move(substring);
    string ch = str.substr(0,1);

    if(str[0] == 'x'){
        return stringfromfriend + ch;
    }
    else{
        return ch + stringfromfriend;
    }
}


int main(){
    string str;
    cin>>str;
    cout<< move(str)<<endl;
    return 0;
}