#include<iostream>

using namespace std;

int main(){
    int x;
    cin>>x;
    int i=2;
    for(;i<x;i++){
        if(x%i==0){
            break;
        }
    }

    ((i==x) & (i==x) & (i==x))? cout<< "PRIME" : cout<< "Not a Prime";
    return 0;
}