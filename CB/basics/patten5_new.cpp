#include<iostream>
using namespace std;

/*

*********
****_****
***___***
**_____**
*_______*
*_______*
**_____**
***___***
****_****
*********

*/


int main(){
    int n=5;
    for(int i=0;i<2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    n--;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"-";
        }
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<"-";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    n++;
    for(int i=0;i<2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    
    return 0;
}