#include<iostream>

using namespace std;
// N=7 (N is a odd number)
//       1 
//     21 12 
//   321   123 
// 4321     1234 
//   321   123 
//     21 12 
//       1 


int main(){
    int n;
    cin>>n;
    n=n/2+1;
    for(int i=0;i<2*(n-1);i++){
        cout<<"  ";
    }
    cout<<"1"<<endl;
    for(int i=1;i<n;i++){
        int k=i+1;
        for(int j=0;j<2*(n-1)-2*(i);j++){
            cout<<"  ";
        }
        for(;k>0;k--){
            cout<<k<<" ";
        }
        for(int j=0;j<2*(i)-1;j++){
            cout<<"  ";
        }
        k++;
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        int k = n-1-i;
        if(n-i-1 !=1 and n-i!=1){
            for(int j=0;j<2*(i+1);j++){
                cout<<"  ";
            }
        }
        for(int j=0;j<n-i-1;j++){
            if(n-i-1!=1)
                cout<<k<<" ";
            k--;
        }
        if(n-i-1 !=1 and n-i!=1){
            for(int j=0;j<2*(n-2)-1-2*i;j++){
                cout<<"  ";
            }
        }
        k++;
        for(int j=0;j<n-i-1;j++){
            if(n-i-1 !=1)
                cout<<k<<" ";
            k++;
        }
        if(n-i-1 !=1 and n-i!=1)
            cout<<endl;
    }
    for(int i=0;i<2*(n-1);i++){
        cout<<"  ";
    }
    cout<<"1"<<endl;
}