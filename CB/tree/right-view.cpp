#include<iostream>
#include<queue>
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


vector<int> bfs(node *root){
    queue<node*> q;
    vector<int> v;
    q.push(root);
    q.push(NULL);
    node *prev = root;
    while(!q.empty()){
        
        if(!q.front()){
            q.push(NULL);
            v.push_back(prev->data);
            q.pop();
        }
        node* temp = q.front();q.pop();
        if(temp){
            // cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right){
                q.push(temp->right);
            }
        }
        prev = temp;
    }
    return v;
}

int main(){
    node *root = NULL;
    int arr[]={10,20,40,-1,-1,50,70,-1,-1,-1,30,-1,60,-1,-1};
    int index = 0;
    root = buildTree(arr,index);
    bfs(root);cout<<endl;
    preOrderprintTree(root);
    return 0;
}