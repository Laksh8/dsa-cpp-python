#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int flag = 1;
    for(int i=2;i<=n;i++){
        for(int j=2;j<i;j++){
            flag=1;
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<i<<" ";
        }
    }
    return 0;
}