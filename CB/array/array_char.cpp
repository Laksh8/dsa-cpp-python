#include<iostream>
#include<cstring>

using namespace std;


void read_string(char *str){
    char ch;
    int i=0;
    while(true){
        cin.get(ch);
        if(ch == '\n'){
            break;
        }
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
}

int main(){
    char str1[100];
    read_string(str1);
    cout<<str1<<endl;
    cin.getline(str1,99,'\n');
    cout<<str1;
    return 0;
}