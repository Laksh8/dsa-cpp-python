#include<iostream>
using namespace std;

class node{
    public:
    // Public Class
    int value;
    node* next; 

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
    node* head = NULL;
    head = insertAtHead(50,head);
    head = insertAtHead(40,head);
    head = insertAtHead(30,head);
    head = insertAtHead(20,head);
    head = insertAtHead(10,head);

    printLinkedList(head);

    return 0;
}