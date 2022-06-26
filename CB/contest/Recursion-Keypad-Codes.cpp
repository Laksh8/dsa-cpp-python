#include<iostream>
using namespace std;

string keys[] = {"","abc" , "def" , "ghi" ,  "jkl" , "mno" , "pqrs" , "tuv" , "wx" , "yz"};

void keypad(string str,string out ,int &count){
    // base case
    if(str==""){
        cout<<out<<" ";
        count++;
        return;
    }
    // recursive case
    for(char s:keys[str[0]-'0']){
        if(str[0]-'0' == 0){
            keypad(str.substr(1),out,count);
        }
        out.push_back(s);
        keypad(str.substr(1),out,count);
        out.pop_back();
    }
}



int main(){
    string s;
    cin>>s;
    int count = 0;
    string out="";
    keypad(s,out,count);
    cout<<endl<<count;
    return 0;
}