#include<bits/stdc++.h>
using namespace std;

int main(){

    int value;
    cin>>value;
    int i=0;
    while(i<value){
        int j=0;
        while(j<value){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}