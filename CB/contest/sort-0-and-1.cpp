#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int z=0,o=0;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1){
            o++;
        }else{
            z++;
        }
    }

    for(int i=0;i<n;i++){
        if(z>0){
            cout<<0<<" ";
            z--;
        }else{
            cout<<1<<" ";
            o--;
        }
    }

    return 0;
}