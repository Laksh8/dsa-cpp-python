#include<iostream>
#include <utility>
#include<climits>
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


int max_diameter(node *root ,int &ma){
    // base case 
    if(!root){
        return 0;
    }
    // recursive case
    int left = max_diameter(root->left,ma);
    int right = max_diameter(root->right,ma);

    ma = max(left+right-1,ma);
    // cout<<ma;
    return left+right+1;
}


int main(){
    node *root = NULL;
    int arr[]={10,20,40,-1,-1,50,70,-1,-1,-1,30,-1,60,-1,-1};
    int index = 0;
    int max = INT_MIN;
    root = buildTree(arr,index);
    max_diameter(root,max);
    cout<<max<<endl;
    preOrderprintTree(root);
    return 0;
}