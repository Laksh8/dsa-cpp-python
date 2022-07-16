#include<iostream>
using namespace std;

/*  Operations on Stack
    1). Push
    2). POP
    3). top
    4). Empty
    5). Size
*/
template  <typename T>
class stack{
    T *arr=NULL;
    int t;
    int n;
    public:
    stack(int n){
        this->n = n;
        this->arr = new T[n];
        this->t = -1;
    }
    void push(T value){
        t++;
        if(t == this->n-1){
            t--;
            return;
        }
        arr[t] = value;
    }

    void pop(){
        if(t==-1){
            return;
        }
        t--;
    }

    T top(){
        return arr[t];
    }

    bool empty(){
        return t == -1;
    }

    int size(){
        return t+1;
    }

};

int main(){
    stack<string> stk(5);

    stk.push("23");
    cout<<stk.top()<<endl;
    cout<<stk.size()<<endl;
    stk.push("43");
    stk.pop();
    cout<<stk.size()<<endl;
    cout<<stk.empty()<<endl;

    return 0;
}