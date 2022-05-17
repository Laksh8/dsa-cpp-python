#include<iostream>
#include<cstring>

using namespace std;

int max_freq(char *str){
    int arr[26]={};

    for(int i=0;i<strlen(str);i++){
        arr[str[i]-'a'] +=1;
    }
    int max_index=0;
    // for(int i=0 ;i<26; cout<<arr[i]<<"  "<<'a'+i,i++);
    for(int i=0;i<26;i++){
        // cout<<arr[i]<<arr[max_index]<<endl;
        if(arr[i]>arr[max_index]){
            max_index=i;
        }
    }
    return max_index;
}

int main(){
    char str[1000];
    cin>>str;
    cout<<char('a'+max_freq(str));
    return 0;
}