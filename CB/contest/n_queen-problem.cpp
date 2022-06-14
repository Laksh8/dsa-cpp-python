#include<iostream>
using namespace std;


void place_n_queen(int n,int out[],int r,int &count){

    // base case

    if(r==n){
        count++;
        for(int i=0;i<n;i++){
            cout<<"{"<<i+1<<"-"<<out[i]+1<<"} ";
        }
        cout<<" ";
        return;
    }

    // recursive case
    for(int j=0;j<n;j++){
        bool can_place = true;

        for(int i=0;i<r;i++){
            if(out[i] == j || out[i] == j +(r-i) || out[i] == j-(r-i)){
                can_place = false;
                break;
            }
        }
        if(can_place){
            out[r] = j;
            place_n_queen(n,out,r+1,count);
        }
    }


}


int main(){
    int n;
    cin>>n;
    int soln[100];
    int count = 0;
    place_n_queen(n,soln,0,count);
    cout<<endl<<count;
    return 0;
}