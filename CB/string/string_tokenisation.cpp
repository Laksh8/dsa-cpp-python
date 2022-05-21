#include<iostream>
#include<cstring>
using namespace std;


int main(){
    char a[] = "abc.def.ghi";    
    char dlim[] = ".";
    char* token = strtok(a,dlim);
    while(token!= NULL){
        cout<<token<<endl;
        token = strtok(NULL,dlim);
    }
    return 0;
}