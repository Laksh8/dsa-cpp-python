#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 1;
    int odd=0,even=0;
    while(n>0){
        
        if(count%2!=0){
            odd += n%10;
        }else{
            even += n%10;
        }
        count+=1;
        n/=10;
    }
    cout<<odd<<"\n"<<even;
    return 0;
}