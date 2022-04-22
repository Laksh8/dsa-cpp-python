#include<iostream>

using namespace std;


int febo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int val = febo(n-1) + febo(n-2);
    cout<<val;
    return val;

}


int main(){

    int n=6;

    cout<<"FEBO :"<<endl;

    cout<<febo(n);

    return 0;


}