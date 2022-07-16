#include<iostream>
using namespace std;


class node{
    public:
    // Public Access
    int value;
    node * next;

    node(int value){
        this->value = value;
        this->next = NULL;
    }

};


void insert_at_tail(int value,node*& head){
    
    if(head == NULL){
        head = new node(value);
        return;    
    }


    node *n = new node(value);
    node * tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }

    tail->next = n;
}

void printLinkedList(node * head){
    // base case 
    if(head == NULL){
        return;
    }

    // recursion case
    cout<<head->value<<" ";
    printLinkedList(head->next);
}


void remove_duplicate(node *head){
    if(!head){
        return;
    }
    node *prev = head;
    node *tail = head->next;
    while(tail){
        if(prev->value != tail->value){
            prev->next = tail;
            prev = tail;
            tail = tail->next;
        }else{
            node *prev_node = tail;
            tail = tail->next;
            delete prev_node;
        }    
    }
    prev->next = NULL;
}



int main(){
    node * head = NULL;

    insert_at_tail(1,head);
    insert_at_tail(2,head);
    insert_at_tail(2,head);
    insert_at_tail(2,head);
    insert_at_tail(2,head);
    insert_at_tail(3,head);
    insert_at_tail(3,head);
    insert_at_tail(3,head);
    insert_at_tail(4,head);
    insert_at_tail(4,head);
    insert_at_tail(4,head);
    insert_at_tail(5,head);
    insert_at_tail(5,head);

    
    remove_duplicate(head);
    printLinkedList(head);
    return 0;
}