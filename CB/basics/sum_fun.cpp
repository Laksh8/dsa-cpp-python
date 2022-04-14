#include<iostream>

using namespace std;

int sum(int a,int b);


int main(){
    cout<<sum(5,9);
    return 0;
}

int sum(int a=0,int b=0){
    return a+b;
}