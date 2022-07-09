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

node * insert_at_tail(node * head,int value){
    node * tail = head;
    node * temp = new node(value);
    if(!tail){
        return temp;
    }
    while(tail->next){
        tail = tail->next;
    }

    tail->next = temp;
    return head;
}



void remove_from_index(node *&head,int index){
    if(index==0){
        node * tail = head;
        head = head->next;
        delete tail;
        return;
    }

    int count = 1;
    node *tail = head;
    while(tail->next and count < index){
        count++;
        tail = tail->next;
    }
    node * removed_node = tail->next;
    tail->next = tail->next->next;
    delete removed_node;
}


void print_node(node * head){
    while(head){
        cout<<head->value<<" ";
        head = head->next;
    }
}


int main(){
    node *head = NULL;
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        head = insert_at_tail(head,x);
    }
    for(int i=0;i<q;i++){
        // cout<<" enter query: ";
        int y;
        cin>>y;
        remove_from_index(head,y);
        print_node(head);
        cout<<endl;
    }
    return 0;
}