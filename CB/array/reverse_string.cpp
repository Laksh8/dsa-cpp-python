#include<iostream>
using namespace std;

int main(){
    char str[100];
    int count = 0;
    // cin.ignore(); // To ignore the next char in input buffer
    while(true){
        char ch;
        cin.get(ch);
        count+=1;
        if(ch == '\n'){
            break;
        }
        str[count] = ch;
    }
    str[count] = '\0';

    for(int i=0,j=count-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout<<str;

    return 0;
}