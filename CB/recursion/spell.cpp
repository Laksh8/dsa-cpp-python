#include<iostream>
using namespace std;
string str[] = { "zero","one","two","three","four","five" ,"six","seven","eight","nine" };

void f(int n){

    
    // Base case
    if(n==0){
        return ;
    }
    f(n/10);
    cout<<str[n%10]<<" ";
}


int main(){
    int n = 1234;
    f(n);
    return 0;
}