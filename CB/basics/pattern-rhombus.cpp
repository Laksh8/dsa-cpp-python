#include<iostream>
using namespace std;
/*
n=3
        1
	2	3	2
3	4	5	4	3
	2	3	2
		1

*/



int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=i+1;
        for(int j=0;j<n-i-1;j++){
            cout<<"\t";
        }
        for(int j=0;j<=i;j++){
            cout<<k<<"\t";
            k++;
        }
        k-=2;
        for(int j=0;j<i;j++){
            cout<<k<<"\t";
            k--;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        int k=n-i-1;
        for(int j=0;j<i+1;j++){
            cout<<"\t";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<k<<"\t";
            k++;
        }
        k-=2;
        for(int j=0;j<n-i-2;j++){
            cout<<k<<"\t";
            k--;
        }
        cout<<endl;
    }
    return 0;
}