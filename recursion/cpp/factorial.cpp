#include<iostream>

using namespace std;



int factorial(int n){

    if(n==2){
        return n;
    }

    int val = n*factorial(n-1);
    return val;
}


int main(){
    int n;
    cin>>n;

    cout<<"Factorial of a Number :"<<endl;
    int val = factorial(n);
    cout<<val;
    return 0;
}