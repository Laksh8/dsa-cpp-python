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

void deleteAtHead(node *& head){
    if(!head){
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}

void deleteAtTail(node *& head){
    if(!head){
        // linkedlist is empty
        return;
    }

    if(!head->next){
        deleteAtHead(head);
    }

    node *prev_tail = NULL;
    node * tail = head;
    while(tail->next){
        prev_tail = tail;
        tail = tail->next;
    }
    prev_tail->next = NULL;
    delete tail;
}


void deleteAtIndex(int index,node * head){
    if(index==0){
        deleteAtHead(head);
        return;
    }
    node *prev = NULL;
    node *tail = head;
    while(!tail and index--){
        prev = tail;
        tail = tail->next;
    }
    if(index != 0){
        return;
    }
    if(!tail or !tail->next){
        return;
    }

    prev->next = tail->next;
    delete tail;

}


int main(){
    node * head = NULL;

    insert_at_tail(10,head);
    insert_at_tail(20,head);
    insert_at_tail(30,head);
    insert_at_tail(40,head);
    insert_at_tail(90,head);
    insert_at_tail(110,head);
    deleteAtHead(head);
    deleteAtTail(head);
    deleteAtIndex(2,head);
    printLinkedList(head);
    return 0;
}