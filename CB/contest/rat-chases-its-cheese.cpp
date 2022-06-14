#include<iostream>
using namespace std;


void chase_cheese(string s[],int i,int j, int n,int m,int out[100][100],bool &flag){
    // base case
    if(i==n and j == m){
        flag=true;
        out[i][j] = 1;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                cout<<out[i][j]<<" ";
            }
            cout<<endl;
        }
        out[i][j] = 0;
        return;
    }


    // recursive case

    // check if point is valid or not
    if(s[i][j] == 'X'){
        return;
    }
    
    // mark as path visited
    out[i][j] = 1;
    // left, right, up or down
    // move left
    if(j>0 and out[i][j-1]!=1){
        // cout<<"recursion called";

        chase_cheese(s,i,j-1,n,m,out,flag);    
    }
    
    // move right
    if(j<m and out[i][j+1]!=1){
        chase_cheese(s,i,j+1,n,m,out,flag);
    }
    // move up
    if(i>0 and out[i-1][j]!=1){
        chase_cheese(s,i-1,j,n,m,out,flag);
    }
    // move down
    if(i<n and out[i+1][j]!=1){
        chase_cheese(s,i+1,j,n,m,out,flag);
    }
    
    // Back tracking Step
    out[i][j] = 0;

}


int main(){
    int n,m;
    cin>>n>>m;
    string s[1000];
    bool flag = false;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int out[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            out[i][j] = 0;
        }
    }

    chase_cheese(s,0,0,n-1,m-1,out,flag);
    if(!flag){
        cout<<"NO PATH FOUND";
    }
    return 0;
}