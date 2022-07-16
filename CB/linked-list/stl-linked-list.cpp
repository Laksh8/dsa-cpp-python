#include<iostream>
using namespace std;

class node{
    public:
    int value;
    node *next;

    node(int value){
        this->value = value;
        this->next = NULL;
    }
};

class forward_list{
    node *head;
    node *size;
    public:
    forward_list(){
        head = NULL;
        size = 0;
    }

    void push_front(int value){
        node *n = new node(value);

    }


}; 

void insert_at_tail(node *&head,int value){
    node *temp = new node(value);
    if(!head){
        head = temp;
        return;
    }

    node *tail = head;
    while(tail){
        tail = tail->next;
    }
    tail->next = temp;
}


int main(){
    return 0;
}