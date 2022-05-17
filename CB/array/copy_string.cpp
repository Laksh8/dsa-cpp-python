#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char str1[100] = "kyhgkjhjhmjgm";
    char str2[] = "worldrjgr";

    for(int i=0;i<=strlen(str2);i++){
        str1[i] = str2[i];
    }

    cout<<str1;
    return 0;
}