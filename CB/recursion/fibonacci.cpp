#include<iostream>
using namespace std;

int febo(int n){
    if(n==0 or n==1){
        return n;
    }else if(n<0){
        return 0;
    }

    int val = febo(n-1) + febo(n-2);
    return val;
}


int main(){
    cout<<febo(7);
    return 0;
}
