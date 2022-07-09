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

void insertion_sort_ll(node *&head ,int n){
    // if their is no or 1 element in the list
    if(!head or !head->next){
        return;
    }
    node *tail = head;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(tail->value < head->value){
                head->next = tail->next;
                tail->next = head;
                head = tail;
            }
        }
        tail = tail->next;
    }

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