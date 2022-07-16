#include<iostream>
using namespace std;


class queue{
    int *arr;
    int f; // front
    int r; // back
    int count; //count
    int n; 

    public:

    queue(int n){
        this->n = n+1;
        arr = new int[n];
        f = 0;
        r = 0;
        count = 0;
    }
    void push(int val){
        if((r+1)%n == f){
            return;
        }
        count ++;
        r = (r+1) %n;
        arr[r] = val;
    }

    void pop(){
        if(f == r){
            return;
        }
        f = (f+1) %n;
        count --;
    }

    int front(){
        return arr[(f+1)%n];
    }

    bool empty(){
        return f == r;
    }

    int size(){
        return count;
    }
    
};



int main(){
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.push(20);
    q.push(30);
    q.push(20);
    cout<<q.front()<<endl;
    // q.push(30);
    return 0;
}