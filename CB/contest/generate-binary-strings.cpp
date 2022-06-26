#include<iostream>
using namespace std;


void generate_binary(string str,int n,string out){
    // base case
    if(str[n]=='\0'){
        cout<<out<<" ";
        return;
    }
    // recursive case
    if(str[n] == '?'){
        // consider zero
        out.push_back('0');
        generate_binary(str,n+1,out);
        out.pop_back();
        out.push_back('1');
        generate_binary(str,n+1,out);
        out.pop_back();

    }
    // for consider zero
    else{
        out.push_back(str[n]);
        generate_binary(str,n+1,out);
        out.pop_back();
    }
}



int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str;
        cin>>str;
        string out="";
        generate_binary(str,0,out);
        cout<<endl;
    }
    return 0;
}