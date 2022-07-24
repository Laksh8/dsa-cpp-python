#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


node *insert(node* root,int data){
    // base case
    if(!root){
        return new node(data);
    }

    // recursive case
    if(root->data > data){
        root->left = insert(root->left,data);
    }else{
        root->right = insert(root->right,data);
    }
    return root;
}

void inorder(node * root){
    // base case
    if(!root){
        return;
    }
    // recursive case
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


node * deleteBST(node * root,int data){
    // base case
    if(!root){
        return NULL;
    }

    // recursive case
    if(root->data == data){
         
    }

    if(root->data> data){
        root->left = deleteBST(root->left,data);
    }
    else{
        root->right = deleteBST(root->right,data);
    }

    return root;

}





int main(){
    node *root = NULL;
    root = insert(root,5);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,3);
    root = insert(root,1);
    root = insert(root,44);
    root = insert(root,-50);
    // inorder(root);
    deleteBST(root,50);
    return 0;
}