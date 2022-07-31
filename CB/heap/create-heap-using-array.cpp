#include<iostream>
#include<vector>
#include<queue>
using namespace std;




class heap{
    vector<int> v;
    public:

    void place_element(int index){
        // base case
        if(index == 0){
            return;
        }
        // recursive case
        int parent = index%2 ==0? (index/2)-1 : index/2;
        if(v[index] < v[parent]){
            swap(v[index],v[parent]);
            place_element(parent);
        }
        return;

    }

    void push(int data){
        v.push_back(data);
        place_element(v.size()-1);
    } 

    void heapify(int i){
        int min_index = i;
        int left_child = 2*i +1;
        if(left_child < v.size() and v[min_index]>v[left_child]){
            min_index = left_child;
        }
        int right_child = 2*i+2;
        if(right_child < v.size() and v[min_index]>v[right_child]){
            min_index = right_child;
        }
        if(min_index!= i){
            swap(v[i],v[min_index]);
            heapify(min_index);
        }
        
    }

    void pop(){
        swap(v[0],v[v.size()-1]);
        v.pop_back();
        heapify(0);
    }

    int top(){
        return v[0];
    }

    int size(){
        return v.size();
    }

    bool empty(){
        return v.empty();
    }

};


int main(){
    heap h;
    h.push(5);
    cout<<h.top()<<" Size:"<<h.size()<<" Empty:"<<h.empty()<<endl;
    h.push(3);
    cout<<h.top()<<" Size:"<<h.size()<<" Empty:"<<h.empty()<<endl;
    h.pop();
    cout<<h.top()<<" Size:"<<h.size()<<" Empty:"<<h.empty()<<endl;
    return 0;
} 