#include<iostream>
#include<cstring>
using namespace std;


bool is_ngram(char *str1,char *str2){

    int freq1[26] = {};
    int freq2[26] = {};

    for(int i=0;i<strlen(str1);i++){
        freq1[int(str1[i] - 'a')] ++;
    }

    for(int i=0;i<strlen(str2);i++){
        freq2[int(str2[i] -'a')] ++;
    }
    
    for(int i=0;i<26;i++){
        if(freq1[i] != freq2[i]){
            return 0;
        }
    }
    return 1;
}



int main(){

    char str1[] = "aabbccddee"; 
    char str2[] = "ababecdcde";
    cout<<is_ngram(str1,str2)<<endl;
    return 0;
}