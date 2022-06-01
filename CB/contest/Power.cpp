#include<iostream>
#define ll long long
using namespace std;


ll pow(ll n,ll m){
    // Base case
    if(m==0){
        return 1;
    }

    // recursive case
    return n*pow(n,m-1);
}



int main(){
    ll n,m;
    cin>>n>>m;
    cout<<pow(n,m);
    return 0;
}