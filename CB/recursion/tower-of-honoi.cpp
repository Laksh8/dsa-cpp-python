#include<iostream>
using namespace std;


void toh(int n,char src,char dst,char helper){
    // base case

    if(n==0){
        return;
    }

    // recursive case
    // move n-1 disks from source to helper 
    toh(n-1,src,helper,dst);
    cout<<"Move disk from "<< src<< " to "<<dst<<" using "<<helper<<endl;

    toh(n-1,helper,dst,src);
}


int main(){
    int n = 3;
    toh(n,'A','C','B');
    return 0;
}