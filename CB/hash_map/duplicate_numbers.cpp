#include<iostream>
#include<vector>
#include<utility>
#include<unordered_map>
using namespace std;


void findDuplicate(vector<int>v){
    unordered_map<int,int> m;
    for(int i=0;i<v.size();i++){
        m[v[i]] ++;
    }

    for(pair<int,int> p :m){
        if(p.second>1){
            cout<<p.first<<endl;
        }
    }
}



void findnewDuplicate(vector<int>v){
    int n = v.size();
    for(int i=0;i<n;i++){
        v[v[i] %n] += n;
    }
    
    for(int i=0;i<n;i++){
        (v[i] / 5) > 1 ? cout<<i<<endl: cout<<"" ;
    }
}


int main(){
    vector<int> v = {1,0,1,0,2};
    findDuplicate(v);

    cout<<endl<<endl;
    findnewDuplicate(v);
    return 0;
}