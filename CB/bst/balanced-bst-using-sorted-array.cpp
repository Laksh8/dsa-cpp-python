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


bool searchBST(node * root,int data){
    // base case
    if(!root){
        return false;
    }

    // recursive case
    if(root->data == data){
        return true;
    }

    if(root->data> data){
        return searchBST(root->left,data);
    }
    else{
        return searchBST(root->right,data);
    }



}

node *buildTree(int arr[],int s,int e){
    // base case
    if(s>e){
        return NULL;
    }

    // recursive case
    int m = s + (e-s)/2;
    node * root = new node(arr[m]);

    root->left = buildTree(arr,s,m-1);

    root->right = buildTree(arr,m+1,s);

    return root;
}


int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    node *root = buildTree(arr,0,9);
    inorder(root);
    return 0;

}