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

node * insertAtHead(int value,node * head){
    // Node Created
    node* n = new node(value);

    // New Node pointing to current head
    n->next = head;
    // n is a new Head
    return n;
}

void insert_at_index(int value,int index,node *& head){
    if(index==0){
        head = insertAtHead(value,head);
        return;
    }
    
    int count = 0;
    node * tail = head;
    while( tail!=NULL and count<index-1){
        tail = tail->next;
        count ++;
    }
    if(tail->next == NULL){
        insert_at_tail(value,tail);
        return;
    }
    node *n = new node(value);
    n->next = tail->next;
    tail->next = n;
}

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

int main(){
    node * head = NULL;

    insert_at_tail(10,head);
    insert_at_tail(20,head);
    insert_at_tail(30,head);
    insert_at_tail(40,head);
    insert_at_tail(90,head);
    insert_at_tail(110,head);
    insert_at_index(24,7,head);
    printLinkedList(head);

    return 0;
}