#include<iostream>
#include<cstring>
using namespace std;

void replace_pi(char str[],int i,int n){
    // base case
    if(str[i]=='\0'){
        return;
    }

    // recursive case
    if(str[i] == 'p' and str[i+1]=='i'){
        n+=2;
        for(int j=n;j>i;j--){
            str[j] = str[j-2];
        }
        str[i] = '3';
        str[i+1] = '.';
        str[i+2] = '1';
        str[i+3] = '4';
        replace_pi(str,i+2,n);
    }else{
        replace_pi(str,i+1,n);
    }
}   


int main(){
    int n;
    cin>>n;
    char str[1000];
    
    for(int i=0;i<n;i++){
        cin>>str;
        replace_pi(str,0,strlen(str));
        cout<<str<<endl;
    }
    return 0;
}