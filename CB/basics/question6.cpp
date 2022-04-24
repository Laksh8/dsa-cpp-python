#include<iostream>
using namespace std;

int main(){
    char x;
    int count = 0;
    while(true){
        x = cin.get();
        if(x=='$'){
            break;
        }
        count +=1;
    }
    cout<<count;
    return 0;
}