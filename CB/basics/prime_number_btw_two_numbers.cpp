#include<iostream>

using namespace std;

int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
    int start,end;
    cout<<"Enter start and end: ";
    cin>>start>>end;
    for(int i=start;i<=end;i+=1){
        if(prime(i)){
            cout<<i<<" is a prime Number"<<endl;
        }
    }
}