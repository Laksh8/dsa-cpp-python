#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    int v;
    bool isDirected;
    list<int> * arr ;

    graph(int v,bool isDirected=false){
        this->v = v;
        this->isDirected = isDirected;
        this->arr = new list<int>[v];
    }



};

int main(){

    return 0;
}