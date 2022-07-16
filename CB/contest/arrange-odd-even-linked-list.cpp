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


void print_ll(node *head ,node *odd,node *even){
    cout<<"Original List: ";
    while(head){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl<<"Modified List: " ;
    while(odd){
        cout<<odd->value<<" ";
        odd = odd->next;
    }
    while(even){
        cout<<even->value<<" ";
        even = even->next;
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    node *head = NULL;
    node *odd = NULL;
    node* even = NULL;    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x %2==0){
            insert_at_tail(head,x);
            insert_at_tail(even,x);
        }
        else{
            insert_at_tail(head,x);
            insert_at_tail(odd,x);
        }
        
    }
    print_ll(head,odd,even);
    return 0;
}