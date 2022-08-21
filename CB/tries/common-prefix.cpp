#include<iostream>
#include<unordered_map>
using namespace std;


class node{

    public:
    char data;
    bool terminal;
    unordered_map<char,node*> m;
    int freq;

    node(char ch){
        this->data = ch;
        this->terminal = false;
        freq = 0;
    }

};


class trie{

    public:
    node *root = new node('#');


    void insert(string str){
        node *cur = root;
        for(int i=0;i<str.size();i++){
            if(cur->m.find(str[i]) == cur->m.end()){
                // not found
                node* n = new node(str[i]);
                cur->m[str[i]] = n;
            }
            cur = cur->m[str[i]];
            cur->freq ++;
        }
        cur->terminal = true;
    }

    string unique_prefix(string str){
        node* cur = root;
        string s = "";
        for(int i=0;i<str.size();i++){
            cur = cur->m[str[i]];
            s.push_back(str[i]);
            if(cur->freq == 1 ){
                return s;
            }
        } 

        if(cur->freq == 1){
            return s;
        }
        return "";
    }

    string common_prefix(){
        node* cur = root;
        string s = "";
        while(cur->freq == n){
            if(cur->data != '#') s.push_back(cur->data);
            if(cur->m.size() == 0) break;

            cur = cur->m.begin()->second;

        }
        if(cur->freq == 1){
            return s;
        }
        return "";
    }

};


int main(){

    string word[] = { "code","coder", "coding " };

    trie t;
    for(auto i : word){
        t.insert(i);
    }


    for(auto i : word){
        cout<<t.unique_prefix(i)<<endl;
    }

    return 0;
}