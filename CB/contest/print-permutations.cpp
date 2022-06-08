#include<iostream>
using namespace std;

void permutation(string str,int i,int n){
    // base case
    if(str[i] == '\0'){
        cout<<str<< " ";
        return;
    }
    for(int j=i;j<n;j++){
        // recursion case
        swap(str[i],str[j]);
        permutation(str,i+1,n);
        swap(str[i],str[j]);
    }
    
}


int main(){
    string str;
    cin>>str;
    permutation(str,0,str.size());
    return 0;
}