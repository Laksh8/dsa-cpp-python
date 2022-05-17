#include<iostream>
using namespace std;

int main(){
    int x=10;
    int *xptr;
    xptr = &x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<xptr<<endl;
    
    char ch='A';
    char *chptr = &ch;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<chptr<<endl;
    
    int *chintptr = (int*)&ch;
    cout<<chintptr<<endl;
    
    return 0;

}
