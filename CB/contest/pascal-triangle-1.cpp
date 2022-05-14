#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int k=0;k<=2*(n-i)-1;k++){
            cout<<" ";

        }
        cout<<1<<"  ";
        int prev = i;
        int val = i-1;
        int j=2;
        while(val>=0){
            cout<<prev<<"  ";
            prev=(prev*val)/j;
            j++;
            val--;
        }cout<<endl;
    }
    return 0;
}