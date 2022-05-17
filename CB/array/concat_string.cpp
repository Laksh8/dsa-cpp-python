#include<iostream>
#include<cstring>

using namespace std;

void concat_string(char *str1,char *str2 ){
    int count = strlen(str1);
    int i=0;
    while(i<=strlen(str2)){
        str1[count] = str2[i];
        count++;
        i++;
    }
    return;
}


int main(){
    char str1[100] = "hello";
    char str2[] = "world";
    
    concat_string(str1,str2);
    cout<<str1<<endl;
    return 0;
}