#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


node* buildTree(int arr[],int &index  ){
    // base case
    int data =arr[index] ;
    if(data == -1){
        return NULL;
    }
    // recursive case
    node *root = new node(data);
    root->left = buildTree(arr,++index);
    root->right = buildTree(arr,++index);

    return root;
}


void preOrderprintTree(node * root){
    // base case
    if(!root){
        return;
    }

    // recursive case

    cout<<root->data<<" ";
    preOrderprintTree(root->left);
    preOrderprintTree(root->right);
}


node *mirrorTree(node *root){
    // base case
    if(!root){
        return NULL;
    }
    // recursive case
    
    node *left = mirrorTree(root->left);
    node *right = mirrorTree(root->right);

    root->left = right;
    root->right = left;
    return root;

}



// int sumOfNodes(node *root){
//     // base case
//     if(!root){
//         return 0;
//     }
//     // recursive case
//     int x = sumOfNodes(root->left);
//     int y = sumOfNodes(root->right);
//     return x+y+root->data;
// }


int main(){
    node *root = NULL;
    int arr[]={10,20,40,-1,-1,50,70,-1,-1,-1,30,-1,60,-1,-1};
    int index = 0;
    root = buildTree(arr,index);
    root = mirrorTree(root);
    preOrderprintTree(root);
    return 0;
}