#include<iostream>

using namespace std;

int power(int n,int pow){
    int pov=1;
    for(int i=0;i<pow;i++){
        pov*=n;
    }
    return pov;
}


int main(){
    int n,pow;
    cout<<"Enter the value of a and b where a^b";
    cin>>n>>pow;
    cout<<power(2 ,pow);
    return 0;
}