#include<iostream>
using namespace std;

int multiply(int a,int b){
    //base case
    if(b==0){
        return 0;
    }
    // recursion
    return a + multiply(a,abs(b)-1);
}


int main(){
    cout<<multiply(4,-3);
    return 0;
}