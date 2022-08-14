#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    vector<int> v = {10,20,30,10,20,10,40,50,20,30};
    unordered_map<int,int> m;

    for(int i:v){
        m[v[i]] ++;
    }


    vector<vector<int>> sol(v.size()+1);

    for(auto p:m){
        sol[p.second].push_back(p.first);
    }
    int k = 2;
    for(int i=sol.size()-1;i>0;i--){
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j]<<" ";
            k--;

            if(!k){
                return 0;
            }
        }
    }

    return 0;
}