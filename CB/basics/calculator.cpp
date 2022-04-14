#include<iostream>

using namespace std;

int main(){

    int n;
    int a,b;
    cout<<"Enter Value of N :";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Enter 2 Values for Addition :";
        cin>>a>>b;
        cout<<"Sum is "<<a+b<<endl;
        break;
    case 2:
        cout<<"Enter 2 Values for Subtraction :";
        cin>>a>>b;
        cout<<"SUB is "<<a-b<<endl;
        break;
    case 3:
        cout<<"Enter 2 Values for Multiplication :";
        cin>>a>>b;
        cout<<"Mult is "<<a*b<<endl;
        break;
    case 4:
        cout<<"Enter 2 Values for Division :";
        cin>>a>>b;
        cout<<"Division  is "<<a/b<<endl;
        break;
    default:
        break;
    }
}