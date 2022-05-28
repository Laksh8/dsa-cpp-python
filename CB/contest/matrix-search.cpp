#include<iostream>
using namespace std;


int binary_search(int arr[30],int m,int target){
    for(int i=0;i<m;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}



int main(){
    int n,m;
    cin>>n>>m;
    int arr[30][30];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i][m-1] < target){
            continue;
        }
        int j = binary_search(arr[i],m,target);
        if(j!=-1){
            cout<<1;
            flag=false;
        }
    }
    if(flag){
        cout<<0;
    }
    return 0;
}
