#include<iostream>
using namespace std;

class node {
    public:
    int value;
    node *next;

    node(int value){
        this->value = value;
        this->next = NULL;  
    }
};  


void insert_at_tail(node *&head,int value){
    node *temp = new node(value);
    if(!head){
        head = temp;
        return;
    }
    node *tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    
    tail->next = temp;
}


void print_ll(node *head){
    while(head){
        cout<<head->value<<" ";
        head = head->next;
    }
}

int main(){
    int n;
    cin>>n;
    int t = n;
    node *head=NULL;
    while(t--){
        int x;
        cin>>x;
        insert_at_tail(head,x);
    }
    int k;
    cin>>k;
    k+=1;
    k%=n;
    node *tail = head;
    while(k--){
        tail = tail->next;
    }
    node *prev = tail;
    tail = head;
    while(prev){
        prev = prev->next;
        tail = tail->next;
    }

    prev = tail->next;
    tail->next = NULL;
    node *temp_head = prev;
    while(prev->next){
        prev = prev->next;
    }
    prev->next = head;
    head = temp_head;
    print_ll(head);
    return 0;
}
