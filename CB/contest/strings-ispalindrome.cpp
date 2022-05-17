#include<iostream>
#include<cstring>

using namespace std;


bool is_palindrome(char *str){
    int n = strlen(str);
    for(int i=0;i<=n/2;i++){
        if(str[i] != str[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    char str[1000];
    cin>>str;
    if(is_palindrome(str)){
        cout<<"true";
    }else {
        cout<<"false";
    }

    return 0;
}