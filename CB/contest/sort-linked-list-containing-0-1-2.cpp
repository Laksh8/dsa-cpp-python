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


void sort_ll(node *&head){
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    node *tail = head;
    while(tail){
        if(tail->value==0){
            count_0++;
        }else if(tail->value==1){
            count_1++;
        }
        else{
            count_2++;
        }
        tail = tail->next;
    }
    tail = head;
    while(count_0--){
        tail->value = 0;
        tail = tail->next;
    }
    while(count_1--){
        tail->value = 1;
        tail = tail->next;
    }
    while(count_2--){
        tail->value = 2;
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
    }
    
    sort_ll(head);
    print_ll(head);
    return 0;
}