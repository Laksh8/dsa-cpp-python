#include<iostream>
using namespace std;

void board_path(int n,int m,int i,int out[],int &count,int &sum){
    // base case
    if(sum == n){
        count ++;
        for(int j=0;j<i;j++){
            cout<<out[j];
        }
        cout<<" ";
        return;
    }
    if(sum > n){
        return;
    }
    // recursive case
    for(int j=0;j<m;j++){
        out[i] = j+1;
        sum+=j+1;
        board_path(n,m,i+1,out,count,sum);
        sum-=j+1;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int out[1000];
    int count = 0;
    int sum=0;
    board_path(n,m,0,out,count,sum);
    cout<<endl<<count;
    return 0;
}