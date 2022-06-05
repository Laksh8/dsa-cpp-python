#include<iostream>
using namespace std;
int count = 0;

void toh(int n,string src,string dst,string helper){
    // base case

    if(n==0){
        return;
    }
    // recursive case
    // move n-1 disks from source to helper 
    toh(n-1,src,helper,dst);
    cout<<"Move "<<n<<"th disc from "<< src <<" to "<<dst<<endl;
    count++;
    toh(n-1,helper,dst,src);

}


int main(){
    int n;
    cin>>n;
    toh(n,"T1","T2","T3");
    cout<<count;
    return 0;
}