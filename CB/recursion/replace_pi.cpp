#include<iostream>
using namespace std;

void replacePi(char str[],int i,int &n){
    // base case
    if(str[i]=='\0'){
        return;
    }

    // recursive case
    if(str[i] == 'p' && str[i+1]=='i'){
        // replace pi with 3.14 and give string to friend
        int j = n+2;
        while(j>i){
            str[j] = str[j-1];
            j--;
        }
        str[i] = '3';
        str[i+1] = '.';
        str[i+2] = '1';
        str[i+3] = '4';
        n+=2;
        replacePi(str,i+4,n);
    }else{
        replacePi(str,i+1,n);
    }
}


int main(){
    char str[201]="ipipipip";
    // cin>>str;
    int n = 0;
    while(str[n]=='\0'){
        n++;
    }
    replacePi(str,0,n);
    cout<<str;
    return 0;
}