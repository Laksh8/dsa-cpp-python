#include<iostream>
using namespace std;


class node{
    public:
    int value;
    node* next;
    node* prev;
    node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class doubly{
    node *head;
    node *tail;

    doubly(){
        this->head = NULL;
        this->tail = NULL;
    }

    void push_back(int value){
        node *temp = new node(value);
        if(!tail){
            this->head = temp;
            this->tail = temp;
            return;
        }
        this->tail->next = temp;
        this->tail = temp;
    }

    void push_front(int value){
        node *temp = new node(value);
        temp->next = this->head;
        this->head = temp;      
    }
    
};


int main(){

    return 0;
}