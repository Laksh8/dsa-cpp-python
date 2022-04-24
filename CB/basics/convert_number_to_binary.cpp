#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;

    int k=n;
    int no_of_bits = log2(n)+1;
    int i=no_of_bits;
    char chr[ no_of_bits];
    while(i>0){
        if(k&1){
            chr[i-1] = '1';
        }else{
            chr[i-1] = '0';
        }
        
        i--;
        k=k>>1;
    }
    for(int i=0;i<no_of_bits;i++){
        cout<<chr[i]<<" ";
    }
    return 0;
}