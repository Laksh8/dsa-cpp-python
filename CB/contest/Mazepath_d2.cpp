#include<iostream>
using namespace std;

void mazePath(string &s,int i,int j,int  n1,int n2,int &count){
    // base case 
    if(i==n1 and j == n2){
        count ++;
        cout<<s<< " ";
        return;
    }

    // recursive case
    // Move Vertical
    if(i<n1){
        s.push_back('V');
        mazePath(s,i+1,j,n1,n2,count);
        s.pop_back();
    }
    // Move Horizontal 
    if(j<n2){
        s.push_back('H');
        mazePath(s,i,j+1,n1,n2,count);
        s.pop_back();
    }

    

    // Move Diagonal
    if(i==j or i+j == n1){
        s.push_back('D');
        mazePath(s,i+1,j+1,n1,n2,count);
        s.pop_back();
    }
    return;
}


int main(){
    int n;
    cin>>n;
    string s="";
    int count = 0;
    mazePath(s,0,0,n-1,n-1,count);
    cout<<endl<<count;
    return 0;
}