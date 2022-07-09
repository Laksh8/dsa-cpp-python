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


node *get_mid_point(node *head){
    if(!head){
        return head;
    }
    node * slow_pt = head;
    node *fast_pt = head->next;

    while(fast_pt && fast_pt->next){   
        slow_pt = slow_pt->next;
        fast_pt = fast_pt->next;
        // if(){
        //     return slow_pt;
        // }
        fast_pt = fast_pt->next;
    }
    return slow_pt;

}


int main(){
    node * head = NULL;

    insert_at_tail(10,head);
    insert_at_tail(20,head);
    insert_at_tail(30,head);
    insert_at_tail(40,head);
    insert_at_tail(50,head);
    insert_at_tail(60,head);

    printLinkedList(head);
    cout<<get_mid_point(head)->value;
    return 0;
}