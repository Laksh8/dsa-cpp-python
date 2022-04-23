#include<iostream>

using namespace std;

int main(){
    float n;
    cin>>n;
    int flag=0;
    int i=1;
    while(n/i >=i){

        if((n/i)==i){
            flag=1;
            cout<<i<<" is the perfect square of "<<n<<endl;
            break;
        }
        i++;
    }
    if(flag==0){ 
        cout<<n <<" is the nearest square root of " << i-1<<endl;
        float sqrt=i-1;
        while(sqrt*sqrt<=n){
            sqrt+=.01;
        }
        cout<<sqrt<<" is the nearest sequest root of "<<n;
    }

    return 0;
}

