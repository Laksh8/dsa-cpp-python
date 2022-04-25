#include<iostream>
using namespace std;

// n = 7
// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *

int main(){
    int n;
    cin>>n;
    n=n/2+1;
    for(int i=0;i<2*n-1;i++){
        if(i==0 or i>n-2){
            cout<<"*";
        }else{
            cout<<" ";
        }    
    }
    cout<<endl;

    for(int i=0;i<n-2;i++){
        for(int j=0;j<n;j++){
            if(j==0 or j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
     
        cout<<endl;
    }
    for(int i=0;i<2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<n-2;i++){
        for(int j=0;j<2*n-1;j++){
            if(j==n-1 or j==2*n-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<2*n-1;i++){
        if(i<n or i==2*n-2)
            cout<<"*";
        else
            cout<<" ";
    }
    return 0;
}