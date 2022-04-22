#include<iostream>

using namespace std;


int exponent(int n,int m){
    if(m==0){
        return 1;
    }
    return n*exponent(n,m-1);
}

int main(){
    int n=2,m=0;
    cout<<exponent(n,m);
    return 0;
}