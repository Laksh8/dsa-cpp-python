#include<iostream>
using namespace std;

int main(){
    int A[5]={1,2,3,4,5};
    int n = sizeof(A)/sizeof(int);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1;i>-1;i--){
        cout<<A[i]<<" ";
    }
    return 0;
}