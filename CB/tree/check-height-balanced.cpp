#include<iostream>
#include <utility>
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



pair <bool,int >checkHeightBalanced(node *root){
    pair<bool,int> p;
    // base case
    if(!root){
        return pair<bool,int>(true,0);
    }
    // recursive case
    pair<bool,int> left = checkHeightBalanced(root->left);
    pair<bool,int> right = checkHeightBalanced(root->right);

    bool root_balanced = abs(left.second - right.second) <=1 ? true:false;

    p.first = left.first && right.first && root_balanced;
    p.second = 1 + max(left.second , right.second);

    return p;

}

// pair <bool,int> hightBalanced(node *root){
//     // base case
//     if(!root){
//         return pair<bool,int>(true,0);
//     }

//     // recursive case
//     pair<bool,int> left = hightBalanced(root->left);
//     pair<bool,int> right = hightBalanced(root->right);



 
// }





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
    pair<bool,int> p = checkHeightBalanced(root);
    cout<< p.first <<endl;
    preOrderprintTree(root);
    return 0;
}