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


node* remove_duplicate(node *head){
    // base case 
    if(!head or !head->next){
        return head;
    }
    // recursive case
    if(head->value != head->next->value){
        head->next = remove_duplicate(head->next);
        return head;
    }
    else{
        while( head->next and head->value == head->next->value ){
            head = head->next;
        }
        return remove_duplicate(head->next);
    }
}



int main(){
    node * head = NULL;

    // insert_at_tail(1,head);
    insert_at_tail(1,head);
    // insert_at_tail(2,head);
    // insert_at_tail(2,head);
    // insert_at_tail(2,head);
    insert_at_tail(2,head);
    insert_at_tail(3,head);
    insert_at_tail(3,head);
    insert_at_tail(3,head);
    // insert_at_tail(4,head);
    // insert_at_tail(4,head);
    insert_at_tail(4,head);
    insert_at_tail(5,head);
    insert_at_tail(5,head);

    
    head = remove_duplicate(head);
    printLinkedList(head);
    return 0;
}