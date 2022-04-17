#include<iostream>

using namespace std;

int main(){
    unsigned long long int n;
    cout<<"Enter Value of N: ";
    cin>>n;
    int temp=0;
    while(n>0){
        temp+=n%10;
        n/=10;
    }
    cout<<"SUM of digit :"<<temp;
    return 0;
}