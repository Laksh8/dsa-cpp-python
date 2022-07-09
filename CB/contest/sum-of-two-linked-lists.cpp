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
    while(tail){
        tail = tail->next;
    }
    tail->next = temp;
}

void insert_at_head(node *&head,int value){
    node *temp = new node(value);
    temp->next = head;
    head = temp;
}

node* add_two_ll(node *ll1,node*ll2){
    node *head = NULL;
    int carry = 0;
    while(ll1 and ll2){
        int num = ll1->value + ll2->value+carry;
        insert_at_head(head,num%10);
        carry = num/10;
        ll1 = ll1->next;
        ll2 = ll2->next;
    }

    while(ll1){
        insert_at_head(head,ll1->value+carry);
        carry=0;
    }
    while(ll2){
        insert_at_head(head,ll2->value+carry);
        carry=0;
    }

    if(carry){
        insert_at_head(head,carry);
    }
    return head;
}

// void reverse_ll(node *head){
//     // 
// }

void print_ll(node *head){
    while(head){
        cout<<head->value<<" ";
        head = head->next;
    }
}

int main(){
    int n,m;
    node *ll1 = NULL;
    node *ll2 = NULL;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;  
        insert_at_head(ll1,x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        insert_at_head(ll2,x);
    }
    node *sum = add_two_ll(ll1,ll2);
    print_ll(sum);

    return 0;
}