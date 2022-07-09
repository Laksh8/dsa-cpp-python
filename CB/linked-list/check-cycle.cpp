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



node *kth_node_from_last(node *head, int k){
    node *slow = head;
    node *fast = head;
    while(k-- and fast){
        fast = fast->next;
    }
    if(!fast){
        return NULL;
    }
    while(fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}


void isCyclePresent(node *&head){
    node *slow = head;
    node *fast = head;
    while(fast and fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            fast = head->next;
            while(fast != slow->next){
                fast = fast->next;
                slow = slow->next;
            }
            slow->next = NULL;
            cout<<slow->value;
        }
    }
    // return;
}


int main(){
    node * head = NULL;

    insert_at_tail(10,head);
    insert_at_tail(20,head);
    insert_at_tail(30,head);
    insert_at_tail(40,head);
    insert_at_tail(50,head);
    insert_at_tail(60,head);
    // int k = 2;
    // // printLinkedList(head);
    // cout<<kth_node_from_last(head,k)->value;
    return 0;
}   