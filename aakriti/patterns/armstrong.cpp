#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cin>>num;
    int num_len=0;
    int value = num;
    while(value){
        num_len++;
        value/=10;
    }

    value = num;
    int sum = 0;
    while(value){
        int temp = value %10;
        int exp = 1;

        for(int i=0;i<num_len;i++){
            exp *= temp;
        }
        sum += exp;
        value/=10;
    }

    if(sum==num){
        cout<<num<<" Is a Armstrong number"<<endl;
    }
    else{
        cout<<num<<" Is not a Armstrong number"<<endl;
    }




    return 0;
}