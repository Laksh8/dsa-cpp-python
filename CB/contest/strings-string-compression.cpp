#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char str[1000];
    cin>>str;
    int arr[26] = {};
    for(int i=0;i<strlen(str);i++){
        arr[str[i]-'a'] +=1;
    }
    char temp = '\0';

    for(int i=0;i<strlen(str);i++){
        if(temp == str[i]){
            continue;
        }
        temp = str[i];
        if(arr[temp-'a']>1){
            cout<<temp << arr[temp-'a'];
        }else if(arr[temp-'a']==1){
            cout<<temp;
        }
    }


    return 0;
}