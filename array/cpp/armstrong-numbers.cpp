#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;
    int temp=n,num=0;
    while(temp>0){
        num += (temp%10)*(temp%10)*(temp%10);
        temp/=10;
    }
    cout<<num<<" "<<n;
    return 0;
}