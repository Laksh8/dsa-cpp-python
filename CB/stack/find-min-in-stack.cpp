#include<iostream>
#include<stack>

using namespace std;

class custom_stack{
    stack<int> main_stack;
    stack<int> min_stack;
    public:
    void push(int value){
        main_stack.push(value);
        if(min_stack.empty() || value<= min_stack.top()){
            min_stack.push(value);
        }
    }

    void pop(){
        if(empty()){
            return;
        }
        int top = main_stack.top();
        main_stack.pop();
        if(top == min_stack.top()){
            min_stack.pop();
        }
    }

    int size(){
        return main_stack.size();
    }
    bool empty(){
        return main_stack.empty();
    }

    int minTop(){
        return min_stack.top();
    }


};

int main(){
    custom_stack s;
    s.push(5);
    s.push(15);
    s.push(-5);
    s.push(35);
    s.push(51);
    s.push(-15);
    cout<<s.minTop()<<endl;
    s.pop();
    s.pop();
    s.pop();
    // s.pop();    
    cout<<s.minTop()<<endl;
    return 0;
}