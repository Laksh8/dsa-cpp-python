#include<iostream>
using namespace std;

bool is_even(int a){
    return a%2==0;
}

int mult(int a,int b){
    return a*b;
}

int main(){

    // int n;
    // cin>>n;
    // cout<<is_even(n)<<endl;
    cout<<mult(5,7);
    return 0;
}