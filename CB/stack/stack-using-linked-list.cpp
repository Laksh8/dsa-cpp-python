#include<iostream>
using namespace std;


template <typename T>
class node{
    public:
    T value;
    node *next;
    node(T value){
        this->value = value;
        this->next = NULL;
    }
};


template <typename T>
class stack{
    node *head;
    stack(){
        this->head = NULL;
    }
    public:
    push(T value){
        this->head = new node<T>(value);
        
    }
};



int main(){

    return 0;
}