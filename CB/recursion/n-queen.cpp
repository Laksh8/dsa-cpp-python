#include<iostream>
using namespace std;

void place_n_queen(int n,int out[],int r){
    // base case 
    if(r==n){
        for(int i=0;i<n;i++){
            cout<<out[i]<<" ";
        }
        cout<<endl;
        return;
    }

    // recursive case
    for(int j=0;j<n;j++){
        // place queen in columns j
        bool canPlace = true;

        for(int i=0;i<r;i++){
            // left and right diagonal      Right               Left
            if(out[i] == j || out[i] == j +(r-i) || out[i] == j-(r-i)){
                canPlace = false;
                break;
            }
        }

        if(canPlace){
            out[r] = j;
            place_n_queen(n,out,r+1);
        }
    }

}


int main(){
    int n = 4;
    int soln[10];
    place_n_queen(n,soln,0);
    return 0;
}