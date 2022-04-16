#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n,x;
    cout<<"Enter Value of N : ";
    cin>>n;
    int i=0,max=INT_MIN;
    cout<<"Enter N values : "<<endl;
    while(i<n){
        cin>>x;
        if(max<x){
            max=x;
        }
        i++;
    }
    cout<<"Largest of N numbers is "<<max;
    return 0;
}