#include<iostream>
using namespace std;

int main(){
    unsigned int n;
    cin>>n;

    long long int sum=0,x;
    for(int i=0;i<n;i++){
        cin>>x;
        sum +=x;
        cout<<sum<<" ";
    }
    return 0;
}