#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char str[1000];
    cin>>str;
    cout<<str[0];
    for(int i=1;i<strlen(str);i++){
        cout<<(str[i] - str[i-1])<<str[i];
    }

    return 0;
}