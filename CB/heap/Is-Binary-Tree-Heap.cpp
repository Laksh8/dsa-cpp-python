//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
  
    bool check(Node* tree,int mx){
        // base case
        if(!tree){
            return true;
        }

        // recursive case
        if((tree->data > mx) or (!tree->left and tree->right) ){
            cout<<tree->data <<endl;
            return false;
        }
        return check(tree->left,mx) and check(tree->right,mx);
    }
    bool isHeap(struct Node* tree) {
        // base case
        if(!tree){
            return true;
        }

        // recursive case
        bool check_left = isHeap(tree->left);
        if(!check(tree,tree->data)){
            return false;
        }
        bool check_right = isHeap(tree->right);
        return check_left and check_right;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        if (ob.isHeap(root))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
// } Driver Code Ends





// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // Tree Node
// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };

// // Function to Build Tree
// Node *buildTree(string str) {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N') return NULL;

//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;

//     istringstream iss(str);
//     for (string str; iss >> str;) ip.push_back(str);

//     // Create the root of the tree
//     Node *root = new Node(stoi(ip[0]));

//     // Push the root to the queue
//     queue<Node *> queue;
//     queue.push(root);

//     // Starting from the second element
//     int i = 1;
//     while (!queue.empty() && i < ip.size()) {

//         // Get and remove the front of the queue
//         Node *currNode = queue.front();
//         queue.pop();

//         // Get the current Node's value from the string
//         string currVal = ip[i];

//         // If the left child is not null
//         if (currVal != "N") {

//             // Create the left child for the current Node
//             currNode->left = new Node(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->left);
//         }

//         // For the right child
//         i++;
//         if (i >= ip.size()) break;
//         currVal = ip[i];

//         // If the right child is not null
//         if (currVal != "N") {

//             // Create the right child for the current Node
//             currNode->right = new Node(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }

//     return root;
// }


// // } Driver Code Ends
// // User Function template for C++

// // Structure of node
// /*struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };*/

// class Solution {
//     public:


//     bool isHeap(struct Node* tree) {
//         queue<Node *> q;
//         q.push(tree);
//         while(!q.empty()){
//             Node *temp = q.front();
//             if(temp->right and !temp->left){
//                 return false;
//             }
//             if(temp->left){
//                 if(temp->data < temp->left->data){
//                     return false;
//                 }
//                 q.push(temp->left);
//             } 
//             if(temp->right){
//                 if(temp->data < temp->right->data){
//                     return false;
//                 }
//                 q.push(temp->right);
//             }
//             q.pop();
//         }

//         return true;
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int tc;
//     scanf("%d ", &tc);
//     while (tc--) {
//         string treeString;
//         getline(cin, treeString);
//         Solution ob;
//         Node *root = buildTree(treeString);
//         if (ob.isHeap(root))
//             cout << 1 << endl;
//         else
//             cout << 0 << endl;
//     }

//     return 0;
// }
// // } Driver Code Ends