//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        if(q1.empty() and !q2.empty()){
            q2.push(x);
        }
        else{
            q1.push(x);
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    
    int x;
    if(q1.empty() and q2.empty()){
        return -1;
    }

    if(q1.empty()){
        int n = q2.size()-1;
        for(int i=0;i<n;i++){
            q1.push(q2.front());
            q2.pop();
        }
        x = q2.front();
        q2.pop(); 
    }
    else if(q2.empty()){
        int n = q1.size()-1;
        for(int i=0;i<n;i++){
            q2.push(q1.front());
            q1.pop();
        }
        
        x = q1.front();       
        q1.pop();
    }
    
    return x;
        
}


/*
78 -1 -1 93 -1 60 68 24 31 12 70 23 30 12 73 25 57 82 71 30 6 65 4 69 95 27 68 35 87 2 53 30 20 18 61 100 89 77 88
*/