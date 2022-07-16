#include<iostream>
using namespace std;

class node{
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
    while(tail->next){
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

node * k_rotate(){
    
}

int main(){
    int n;
    cin>>n;
    node *head = NULL;
    // cout<<n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        insert_at_tail(head,x);
        cout<<endl;
    }
    
    print_ll(head);
    return 0;
}