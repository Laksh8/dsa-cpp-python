#include<iostream>
#include<unordered_map>
using namespace std;

class Node{

    public:
    char ch;
    bool terminal;
    unordered_map<char,Node*> m;

};

class trie{
    public:

    Node *root;
    trie(){
        // root = Node("\0");
    }

    void insert(string str){

    }


};
int main(){

    return 0;
}