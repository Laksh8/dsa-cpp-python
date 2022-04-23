#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    n = n>>k;

    if(n&1){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
    return 0;
    
}