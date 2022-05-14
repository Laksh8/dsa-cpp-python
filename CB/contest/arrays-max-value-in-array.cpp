#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=INT_MIN,x;
    for(int i=0;i<n;i++){
        cin>>x; 
        if(temp<x){
            temp = x;
        }
    }
    cout<<temp;

    return 0;
}