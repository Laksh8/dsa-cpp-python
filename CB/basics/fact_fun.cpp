#include<iostream>

using namespace std;

int fact_fun(int n){
    int fact = n;
    for(int i=n-1;i>=2;i--){
        fact*=i;
    }
    return fact;
}


int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    cout<<"Factorial Value of "<<n<<" is "<<fact_fun(n);

}