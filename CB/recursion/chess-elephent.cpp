#include<iostream>
#define ll long long
using namespace std;

ll move_elephent(ll i,ll j){
    // base case
    if(i==0 and j == 0){
        return 1;
    }
    // recursive case
    ll count = 0;
    for(ll k=1;k<=j;k++)
        count += move_elephent(i,j-k);
    for(ll k=1;k<=i;k++)
        count += move_elephent(i-k,j);
    return count;
}



int main(){
    ll n;
    cin>>n;
    cout<<move_elephent(n-1,n-1)<<endl;
    return 0;
}