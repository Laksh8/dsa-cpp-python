#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int *y = &x; // Pointer y = reference of x
    cout<<x<<"   "<<y<<endl;
    x = 9;
    cout<<x<<"   "<<y<<endl;
    return 0;
}