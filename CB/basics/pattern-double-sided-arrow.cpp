#include<iostream>
using namespace std;
// n = 7
//             1 
//         2 1   1 2 
//     3 2 1       1 2 3 
// 4 3 2 1           1 2 3 4 
//     3 2 1       1 2 3 
//         2 1   1 2 
//             1 


int main(){
    int n;
    cin>>n;    
    n = n/2+1;
    for(int i=0;i<n;i++){
        for(int j=1;j<4*(n-i-1)+2;j++){
            cout<<" ";
        }
        int k = i+1;
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k--;
        }
        for(int j=0;j<(i+1)*i;j++){
            cout<<" ";
        }
        k++;
        for(int j=0;j<=i;j++){
            if(i!=0)
                cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    int x = n*(n-1) -4;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<4*(i+1)+1;j++){
            cout<<" ";
        }
        int k = n-i-1;
        while(k>0){
            cout<<k<<" ";
            k--;    
        }
        for(int j=0;j<x;j++){
            cout<<" ";
        }
        x = x-4;
        k++;
        if(i != n-2)
        while(k<n-i){
            
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}
