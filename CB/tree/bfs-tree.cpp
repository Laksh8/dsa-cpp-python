#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* buildTree(int arr[],int &index  ){
    // base case
    int data =arr[index] ;
    if(data == -1){
        return NULL;
    }
    // recursive case
    Node *root = new Node(data);
    root->left = buildTree(arr,++index);
    root->right = buildTree(arr,++index);

    return root;
}


void preOrderprintTree(Node * root  ){
    // base case
    if(!root){
        return;
    }

    // recursive case

    cout<<root->data<<" ";
    preOrderprintTree(root->left);
    preOrderprintTree(root->right);
}


void bfs( queue <Node *> q,vector<int> &v){
        while(!q.empty()){
            Node *curr = q.front();
            q.pop();
            v.push_back(curr->data);
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }
vector<int> levelOrder(Node* node)
{
    //Your code here
    queue<Node*> q;
    vector<int> v;
    // v.push_back(node->data);
    q.push(node);
    bfs(q,v);
    return v;
}
int main(){
    Node *root = NULL;
    int arr[]={10,20,40,-1,-1,50,70,-1,-1,-1,30,-1,60,-1,-1};
    int index = 0;
    root = buildTree(arr,index);
    queue <Node *> q;
    q.push(root);
    vector<int> v = levelOrder(root);
    cout<<endl<<"OUTPUT :";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    preOrderprintTree(root);
    return 0;
}