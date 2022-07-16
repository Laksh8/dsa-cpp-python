#include<iostream>
#include<stack>
using namespace std;








stack<int> insert_at_bottom(stack<int>stk,int value){
    // base case
    if(stk.empty()){
        stk.push(value);
        return stk;
    }

    // recursive case
    int x = stk.top();
    stk.pop();
    stk = insert_at_bottom(stk,value);
    stk.push(x);
    return stk;
}

stack<int> reverse(stack<int>stk){
    // base case
    if(stk.empty()){
        return stk;
    }

    // recursive case
    int x =stk.top();
    stk.pop();

    stk = reverse(stk);
    return insert_at_bottom(stk,x);
}

void print_stack(stack<int> stk){
    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }
    return;
}


int main(){
    stack<int>stk;
    stk.push(10);
    stk.push(10);
    stk.push(10);
    stk.push(10);
    stk.push(10);
    stk.push(10);
    stk.push(10);
    stk.push(10);
    stk = insert_at_bottom(stk,5);
    stk = reverse(stk);
    print_stack(stk);


    return 0;
}