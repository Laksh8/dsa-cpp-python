#include<iostream>
using namespace std;


void maze(int n,int i,int j,string &out,int &count);

int main(){
    int n;
    cin>>n;
    string out ="";
    int count = 0;
    maze(n,0,0,out,count);
    cout<<endl<<count<<endl;
    return 0;
}



void maze(int n,int i,int j,string &out,int &count){
    // base case
    if(i == n-1 and j == n-1){
        count ++;
        cout<<out<<" ";
        return;
    }
    
    if(i >= n or j>= n){
        return;
    }

    // recursive case
    // Horizontal Call
    out.push_back('V');
    maze(n,i,j+1,out,count);
    out.pop_back();
    // digonal
    out.push_back('H');
    maze(n,i+1,j,out,count);
    out.pop_back();

    if(i == j){
        out.push_back('D');
        maze(n,i+1,j+1,out,count);
        out.pop_back(); 
    }
}
