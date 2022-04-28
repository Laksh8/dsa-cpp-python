#include<iostream>
using namespace std;

// n=5
//  1 2 3 4 5
//  * * * * * 1
//  * *   * * 2
//  *       * 3
//  * *   * * 4
//  * * * * * 5


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if( i==1 or i==n or j==1 or j==n ){
                cout<<"*\t";
            }
            else if(i%2==0 and j%2==0){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}