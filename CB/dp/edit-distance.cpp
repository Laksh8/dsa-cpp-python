#include<bits/stdc++.h>
using namespace std;





int edit_distance(string s1,string s2,int n,int m,int i,int j){
    // base case
    if(i == n){
        return m-j;
    }


    if(j == m){
        return n-i;
    }


    // reccursive case
    // insertion 
    int X = edit_distance(s1,s2,n,m,i,j+1);
    int Y = edit_distance(s1,s2,n,m,i+1,j);
    int Z = edit_distance(s1,s2,n,m,i+1,j+1);


    return min(
        1+X, 
        min(
            1+Y,
            (s1[i] != s2[j]) + Z
        ));

}





int main(){

    return 0;
}