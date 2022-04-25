#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        n/=2;
    }else{
        n = n/2 +1;
    }

    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    n--;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}