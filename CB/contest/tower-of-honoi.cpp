#include<iostream>
using namespace std;


int toh(int n,char src,char dst,char helper,int count){
    // base case

    if(n==0){
        return 0;
    }
    // recursive case
    // move n-1 disks from source to helper 
    toh(n-1,src,helper,dst,count);
    cout<<"Move disk from "<< src<< " to "<<dst<<" using "<<helper<<endl;
    toh(n-1,helper,dst,src,count);
    return count;
}


int main(){
    int n = 3;
    cout<<toh(n,'A','C','B',0);
    return 0;
}