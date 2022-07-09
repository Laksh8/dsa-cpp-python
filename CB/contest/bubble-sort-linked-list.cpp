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

void bubble_sort_ll(node *&head,int n){
    if(!head or !head->next){
        return;
    }
    for(int i=0;i<=n-1;i++){
        int j=0;
        node *tail = head;
        node *temp = head->next;
        while(j<n-i-1){
            if(tail->value > temp->value ){
                swap(tail->value,temp->value);
            }
            tail = tail->next;
            temp = temp->next;
            j++;
        }
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
    bubble_sort_ll(head,n);
    print_ll(head);
    return 0;
}