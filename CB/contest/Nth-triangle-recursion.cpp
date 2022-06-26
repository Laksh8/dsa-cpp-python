#include<iostream>
using namespace std;


int nth_triangle(int n,int count){
    // Base case
    if(n==0){
        return count;
    }

    count += n;
    return nth_triangle(n-1,count);
}


int main(){
    int n;
    cin>>n;
    cout<<nth_triangle(n,0);
    return 0;
}