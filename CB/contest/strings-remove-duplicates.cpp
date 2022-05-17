#include<iostream>
#include<cstring>

using namespace std;

void remove_duplicate(char *str){
    char ch = '\0';
    for(int i=0;i<strlen(str);i++){
        if(ch != str[i]){
            cout<<str[i];
            ch=str[i];
        }
    }
}   


int main(){
    char str[1000];
    cin>>str;
    remove_duplicate(str);
    return 0;
}