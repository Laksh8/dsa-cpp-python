#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Hii";
    cin>>n1>>n2;
    int r,d;

    if(n1<n2){
        r=n1;
        d=n2;
    }else{
        d=n1;
        r=n2;
    }

    while(r>0){
        int c = d%r;
        d = r;
        r = c;
    }

    cout<<d;
}