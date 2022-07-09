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

void selection_sort_ll(node *&head,int n){
    if(!head or !head->next){
        return;
    }
    node *new_head = head;
    for(int i=0;i<n;i++){
        int j=i;
        node *tail = new_head;
        node *min = new_head;
        while(tail){
            if(min->value > tail->value){
                min = tail;
            }
            tail = tail->next;
        }
        swap(min->value,new_head->value);
        new_head = new_head->next;
    }
    
}


int main(){
    int n;
    cin>>n;
    node *head = NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        insert_at_tail(head,x);
    }
    selection_sort_ll(head,n);
    print_ll(head);
    return 0;
}