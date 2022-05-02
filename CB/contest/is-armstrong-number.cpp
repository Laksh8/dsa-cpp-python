#include <iostream>
#include <cmath>

using namespace std;

int main(){
    unsigned long long int n;
    cin>>n;
    unsigned long long int temp = n;
    unsigned int count = 0;
    while(temp>0){
        count +=1;
        temp/=10;
    }

    // Armstrong Number Logic
    temp = n;
    unsigned long long int val=0;
    while(temp>0){
        val += pow(temp%10,count);
        temp/=10;
    }

    if(val==n){
        cout<<"true";
    }else{
        cout<<"false";
    }


    return 0;
}