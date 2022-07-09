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

void merge_sort(node *head1 , node * head2){
    // base case

    

    // recursive case
    node *head; 
    if(head1->value < head2->value){
        
    }

}


int main(){
    node * head = NULL;

    insert_at_tail(10,head);
    insert_at_tail(30,head);
    insert_at_tail(50,head);

    node *head2 = NULL;
    insert_at_tail(20,head2);
    insert_at_tail(40,head2);
    insert_at_tail(60,head2);
    // printLinkedList(head);


    return 0;
}