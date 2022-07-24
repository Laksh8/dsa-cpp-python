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


node* buildTree(int arr[],int n){
    node *root = new node(arr[0]);
    queue<node*> q;
    q.push(root);
    for(int i=1;i<n-1;i+=2){
        node *temp = new node(arr[i]);
        node *temp2 = new node(arr[i+1]);
        if(arr[i] != -1){
            q.front()->left = temp;
            q.push(temp);
            q.pop();

        }
        if(arr[i+1] != -1)
        {       
            q.front()->right = temp2;
            q.push(temp2);
            q.pop();
        }
    }
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


void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        if(!q.front()){
            q.push(NULL);
            cout<<endl;
            q.pop();
        }
        node* temp = q.front();q.pop();
        if(temp){
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

int main(){
    node *root = NULL;
    int arr[]={10,20,30,40,50,-1,60,-1,-1,70,-1,-1,-1,-1,-1};
    int index = 0;
    root = buildTree(arr,16);
    bfs(root);cout<<endl;
    preOrderprintTree(root);
    return 0;
}