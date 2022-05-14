#include<iostream>
using namespace std;

int main(){
    unsigned int n;
    cin>>n;
    int z=0,o=0,x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==0){
            z++;
        }else if(x==1){
            o++;
        }
    }
    for(int i=0;i<n;i++){
        if(z>0){
            cout<<0<<" ";
            z--;
        }else if(o>0){
            cout<<1<<" ";
            o--;
        }else{
            cout<<2<<" ";
        }
    }

    return 0;
}