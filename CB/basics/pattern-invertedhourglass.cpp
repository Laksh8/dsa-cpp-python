#include<iostream>
using namespace std;
// n = 5
//  5         5 
//  54       45 
//  543     345 
//  5432   2345 
//  54321 12345 
//  54321012345 
//  54321 12345 
//  5432   2345 
//  543     345 
//  54       45 
//  5         5 



int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=n;
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k--;
        }
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<"  ";
        }
        k+=1;
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    int k=n;
    for(int i=0;i<=2*n;i++){
        cout<<k<< " ";
        if(i<n){
            k--;
        }
        else{
            k++;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int k=n;
        for(int j=0;j<n-i;j++){
            cout<<k<<" ";
            k--;
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"  ";
        }
        k+=1;
        for(int j=0;j<n-i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}