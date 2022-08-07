Node *maxNode(Node *root){
        while(root->right){
            root = root->right;
        }
        return root;
    }

    Node* deleteNode(Node* root, int k)
    {
        // base case
        if(!root){
            return root;
        }

        // recursive case
        root->left = deleteNode(root->left,k);

        // code to delete Node

        // it contains 3 parts 
        
        if(root->data > k){
            // 1). node is leave node 
            if(!root->left or !root->right){
                delete root;
                return NULL;
            }
            
            // 2). node has only one child
            else if((root->left and !root->right) or (!root->left and root->right)){
                Node* temp = NULL;
                if(root->left){
                    temp = root->left;
                }else{
                    temp = root->right;
                }
                delete root;
                return temp;
            }

            
            // 3). node has 2 childs 
            else{
                Node *max_child = maxNode(root->left);
                swap(max_child->data , root->data);
                return deleteNode(max_child,k);
            }
        }

        root->right = deleteNode(root->right,k);
    }