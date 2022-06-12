#include<iostream>
#include<cmath>
using namespace std;

bool is_valid(int n,int grid[][9],int i,int j,int d){
    for(int k=0;k<n;k++){
        if(grid[i][k] == d || grid[k][j]==d){
            return false;
        }
    }
    int rn = sqrt(n);
    int sx = (i/rn) * rn;
    int sy = (j/rn) * rn;
    for(int k=sx;k<sx+rn;k++){
        for(int l=sy;l<sy+rn;l++){
            if(grid[k][l] == d){
                return false;
            }
        }
    }
    return true;
}



void solve(int n,int grid[][9],int i,int j){

    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    if(j==n){
        solve(n,grid,i+1,0);
    }
    if(grid[i][j] != 0){
        solve(n,grid,i,j+1);
        return ;
    }

    for(int d=1;d<=9;d++){
        if(is_valid(n,grid,i,j,d)){
            grid[i][j] = d;
            solve(n,grid,i,j+1);
            grid[i][j] = 0;
            return ;
        }
    }
    

}


int main(){

    return 0;
}