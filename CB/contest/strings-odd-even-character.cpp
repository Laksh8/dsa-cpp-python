#include<iostream>
#include<cstring>

using namespace std;


int function(char *str){
    for(int i=0;i<strlen(str);i++){
        if((str[i])%2==0){
            cout<<char(str[i]-1);
        }else{
            cout<<char(str[i]+1);
        }
    }
    return 0;
}


int main(){
    char str[1000];
    cin>>str;
    function(str);
    return 0;
}