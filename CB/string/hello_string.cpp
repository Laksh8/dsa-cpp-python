#include<iostream>
using namespace std;

int main(){
    string str;
    str = "hello";
    cout<<str<<endl;

    string str3("CODING BLOCKS");
    cout<<str3;

    string str4 = str3;

    string str5;
    getline(cin,str5,'\n');
    return 0;
}