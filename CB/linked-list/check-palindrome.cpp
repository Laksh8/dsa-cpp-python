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
        fast_pt = fast_pt->next;
    }
    return slow_pt;

}

node * reverseRecursive(node *head){
    // base case
    if(!head or !head->next){
        return NULL;
    }

    // recursive case
    node *revHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return revHead;
}


bool isPalindrome(node *head){
    node *midpoint = get_mid_point(head);

    

}


int main(){
    node * head = NULL;

    insert_at_tail(10,head);
    insert_at_tail(20,head);
    insert_at_tail(30,head);
    insert_at_tail(30,head);
    insert_at_tail(20,head);
    insert_at_tail(10,head);
    printLinkedList(head);



    return 0;
}