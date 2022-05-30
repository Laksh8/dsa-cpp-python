#include<iostream>
using namespace std;



int f(string n,int size){
    // base condition
    if(size==0){
        return 0;
    }
    
    // recursion
    int val = f(n.substr(0,size-1),size-1);

    return val*10 + n[size-1] - '0';
}


int main(){
    string str="123";
    cout<<f(str,str.size());
    return 0;
}