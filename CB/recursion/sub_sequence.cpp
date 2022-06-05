#include<iostream>
#include<set>
using namespace std;

void subSequence(char arr[],char out[],int i,int j,set<string>& s){
    // base case
    if(arr[i] == '\0'){
        out[j] = '\0';
        s.insert( string(out) );
        // cout<<out<<endl;
        return;
    }

    // recursive case
    // Include Ith index of array
    out[j] = arr[i];
    subSequence(arr,out,i+1,j+1,s);

    // exclude ith index of array
    subSequence(arr,out,i+1,j,s);
}


int main(){
    char str[] = "abc";
    char out[100];
    set<string>s;
    subSequence(str,out,0,0,s);
    
    return 0;
}