#include<iostream>

using namespace std;



int spelling(int n,string str[]){
    if(n==0){
        return n;
    }
    
    spelling(n/10,str);
    cout<<str[n%10] <<" ";
    return n%10;
}


int main(){

    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n=156;

    spelling(n,str);
}