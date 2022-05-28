#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        int temp = arr[i][0]; 
        for(int j=0;j<m-i;j++){
            // cout<<temp << " ";
            if(temp != arr[j+i][j]){
                flag=false;
            }
        }
    }
    // cout<<endl;
    for(int i=1;i<n;i++){
        int temp = arr[0][i];
        for(int j=0;j<m-i;j++){
            // cout<<temp<<" ";
            if(temp != arr[j][j+i]){
                flag=false;
            }
        }
    }
    if(flag)
        cout<<"true";
    else
        cout<<"flase";
    return 0;
}