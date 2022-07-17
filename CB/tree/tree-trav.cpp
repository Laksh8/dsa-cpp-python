#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* left;
    node* right;

    node(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }

};

void PostOrder(node *root){
    // base case
    if(root){
        return;
    }

    // recursive case
     
    preOrderprintTree(root->left);
    preOrderprintTree(root->right);   
    cout<<root->data<<" ";
}


void InOrder(node *root){
    // base case
    if(root){
        return;
    }

    // recursive case

    preOrderprintTree(root->left);
    cout<<root->data<<" ";
    preOrderprintTree(root->right);   
}

void preOrderprintTree(node * root){
    // base case
    if(root){
        return;
    }

    // recursive case

    cout<<root->data<<" ";
    preOrderprintTree(root->left);
    preOrderprintTree(root->right);

}

int main(){

    return 0;
}