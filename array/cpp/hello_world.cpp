#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> g1;
    int x;
    cout<<"Enter elements in vector";
    for(int i=0;i<10;i++){
        cin>>x;
        g1.push_back(x);
    }
    for(int i=0;i<10;i++){
        cout<<g1[i];
    }
    
    cout<<"Hello World"<<endl;
}