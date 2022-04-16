#include<iostream>

using namespace std;

int main(){
    int n,flag=1;
    cout<<"Enter a Number :";
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            flag=0;
            break;
        }
        i++;
    }
    if(flag){
        cout<<n<<" is a Prime Number."<<endl;
    }
    else{
        cout<<n<<" is not a Prime Number."<<endl;
    }
}