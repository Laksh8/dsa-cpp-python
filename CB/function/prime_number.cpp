#include<iostream>
#include<cmath>
using namespace std;


bool is_prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void print_prime(int n){
    for(int i=2;i<=n;i++){
        if(is_prime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    int a;
    cin>>a;
    print_prime(a);
    return 0;
}