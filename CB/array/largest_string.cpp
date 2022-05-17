#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[1000];
    int n=5;
    char result[1000]={};
    for(int i=0;i<n;i++){
        cin>>str;
        if(strcmp(str,result)>0){
            strcpy(result,str);
        }
    }

    cout<<result;
    return 0;
}