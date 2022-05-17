#include<iostream>
#include<cstring>
using namespace std;


int compare(char *str1,char *str2){
    for(int i=0;i<strlen(str1)-1;i++){
        if(str1[i] > str2[i]){
            cout<<"STR1 is Greater"<<endl;
            return 1;
        }else if(str1[i] < str2[i]){
            cout<<"STR2 is Greater"<<endl;
            return 1;
        }
    }

    if(strlen(str1) > strlen(str2)){
        cout<<"STR1 is Greater"<<endl;
        return 1;
    }else if(strlen(str1) < strlen(str2)) {
        cout<<"STR2 is Greater"<<endl;
        return 1;
    }

    cout<<"STR is same"<<endl;
    return 0;
}



int main(){
    char str1[] = "ABCDE";
    char str2[] = "ABCDE";
    cout<<compare(str1,str2);
    return 0;
}