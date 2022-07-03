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

bool searchLL(int target,node *head){
    // base case
    if(!head){
        return false;
    }

    // recursive case
    if(head->value == target){
        return true;
    }
    return searchLL(target,head->next);
}

int main(){
    node * head = NULL;

    insert_at_tail(10,head);
    insert_at_tail(20,head);
    insert_at_tail(30,head);
    insert_at_tail(40,head);
    insert_at_tail(90,head);
    insert_at_tail(110,head);

    printLinkedList(head);
    int target = 11;
    cout<<endl;
    searchLL(target,head) ? cout<<"true"<<endl : cout<<"false"<<endl;
    
    return 0;
}