#include<iostream>
#include<stack>
using namespace std;


stack<int> remove_mid(stack<int>s,int n,int i){
    // base case
    if(s.empty()){
        return s;
    }
    // recursive case
    int x = s.top();
    s.pop();
    s = remove_mid(s,n,i+1);
    if(n/2 != i) {s.push(x);}
    return s;
}

void print_stack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    s = remove_mid(s,n,0);
    print_stack(s);
    return 0;
}