#include<iostream>
#include<unordered_map>
#include<vector>
#include<utility>
using namespace std;

int main(){
    unordered_map<string,vector<string>> m;

    m["Lakshit"].push_back("0123456789");
    m["Abc"].push_back("1231242343");

    for(pair<string,vector<string>> p : m){
        cout<<"( "<<p.first<<" , "<< p.second[0]<<" )"<<endl;
    }

    return 0;
}