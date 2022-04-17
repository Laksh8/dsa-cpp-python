#include<iostream>

using namespace std;

int main(){
    unsigned int n;
    cout<<"Enter Value of N :";
    cin>>n;
    int rev=0,temp=n;
    while(temp>0){
        rev = rev*10 + temp%10;
        temp/=10;
    }
    cout<<"Reverse value of "<<n<<" is "<<rev;
    return 0;
}