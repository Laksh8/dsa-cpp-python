#include<iostream>
#include<vector>
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
    vector<T> arr;
    public:
    void push(T value){
        arr.push_back(value);
    }

    void pop(){
        if(arr.size() == 0){
            return;
        }
        arr.pop_back();
    }

    T top(){
        return arr.back();
    }

    bool empty(){
        return arr.empty();
    }

    int size(){
        return arr.size();
    }

};

int main(){
    stack<string> stk;

    stk.push("23");
    cout<<stk.top()<<endl;
    cout<<stk.size()<<endl;
    stk.push("43");
    stk.pop();
    cout<<stk.size()<<endl;
    cout<<stk.empty()<<endl;

    return 0;
}