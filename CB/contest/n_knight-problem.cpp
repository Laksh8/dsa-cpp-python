#include<iostream>
using namespace std;


void place_n_knights(int n,int i,int j,string &out){
    // base case 
    if(i == n and j == n){
        cout<<out<<endl;
        return;
    }
    if(i+2 >= n or j+1 >=n ){
        return;
    }else{

    }
    if(i+1 >= n or j+2 >=n){
        return;
    }else{

    }
    if(i-1 <= 0 or j-2 <=0){
        return;
    }else{

    }
    if(i-2 <= 0 or j-1 <=0){
        return;
    }else{

    }



    // recursive case 
    


}


int main(){

    int n;
    cin>>n;
    string out = "";
    place_n_knights(n,0,0,out);
    return 0;
}