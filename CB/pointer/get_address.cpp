#include<iostream>
using namespace std;

int main(){
    int x=1;
    cout<<&x<<endl;
    double y;
    cout<<&y<<endl;
    char ch = 'A';
    cout<< &ch<<endl;
    cout<<sizeof(ch)<<endl;
    return 0;
}