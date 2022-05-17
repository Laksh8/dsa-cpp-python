#include<iostream>
#include<cstring>
using namespace std;

bool is_palindrome(char *str){
    int i=0;
    int j = strlen(str)-1;

    while(i<j){
        if(str[i] !=str[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}


int main(){
    char str[] = "malayalam";
    cout<<is_palindrome(str);
    return 0;
}