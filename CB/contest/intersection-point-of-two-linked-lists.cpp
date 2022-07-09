#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

int length(Node*head)
{
    int cnt=0;
    Node*temp=head;
    while(head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}
// This function gets two arguments - the head pointers of the two linked lists
// Return the node which is the intersection point of these linked lists
// It is assured that the two lists intersect
Node *intersectionOfTwoLinkedLists(Node *l1, Node *l2)
{
    int len1=length(l1);
    int len2=length(l2);
    Node*temp1=l1;
    Node*temp2=l2;
    if(len1>len2)
    {
        int k=len1-len2;
        while(k)
        {
            temp1=temp1->next;
            k--;
        }
    }
    else if(len2>len1)
    {
        int k=len2-len1;
        while(k)
        {
            temp2=temp2->next;
            k--;
        }
    }
    while(temp1 and temp2)
    {
        if(temp1==temp2)
        {
            return temp1;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return NULL;
}
/*
*
*
*   You do not need to refer or modify any code below this.
*   Only modify the above function definition.
*   Any modications to code below could lead to a 'Wrong Answer' verdict despite above code being correct.
*   You do not even need to read or know about the code below.
*
*
*
*/
Node *buildList(unordered_map<int, Node *> &hash)
{
    int x;
    cin >> x;
    Node *head = new Node(x);
    Node *current = head;
    hash[x] = head;
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        Node *n = new Node(x);
        hash[x] = n;
        current->next = n;
        current = n;
    }
    current->next = NULL;
    return head;
}
void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    unordered_map<int, Node *> hash;
    Node *l1 = buildList(hash);
    Node *l2 = NULL;
    int x;
    cin >> x;
    l2 = new Node(x);
    Node *temp = l2;
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        if (hash.find(x) != hash.end())
        {
            temp->next = hash[x];
            break;
        }
        Node *n = new Node(x);
        temp->next = n;
        temp = n;
    }
    cout << "L1 - ";
    printLinkedList(l1);
    cout << "L2 - ";
    printLinkedList(l2);
    Node *intersectionPoint = intersectionOfTwoLinkedLists(l1, l2);
    cout << "Intersection at node with data = " << intersectionPoint->data << endl;
    return 0;
}