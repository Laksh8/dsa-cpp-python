#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    n<<1;
    int count=0;
    while(n>0){
        if(n&1){
            count+=1;
        }
        n=n>>1;
    }
    cout<<count;
    return 0;
}