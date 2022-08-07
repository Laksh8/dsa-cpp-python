#include<iostream>
#include<vector>
using namespace std;


// class minHeap{
//     vector<int> v;

//     void heapify(int i){
//         int min_index = i;
//         int left_child = 2*i +1;
//         if(v[min_index] > v[left_child]){
//             min_index = left_child;
//         }
//         int right_child = 2*i +2;
//         if(v[min_index] > v[right_child]){
//             min_index = right_child;
//         }

//         if(min_index!= i){
//             swap(v[i],v[min_index]);
//             heapify(min_index);
//         }
//     }


//     public:
//     void push(int data){
//         v.push_back(data);
//         int child_index = v.size()-1;
//         int parent_index = child_index%2==0? child_index/2 -1 : child_index/2;
//         while(parent_index>= 0 and v[child_index] < v[parent_index]){
//             swap(v[child_index],v[parent_index]);
//             child_index = parent_index;
//             int parent_index = child_index%2==0? child_index/2 -1 : child_index/2;
//         }

//     }

//     void pop(){
//         swap(v[0],v[v.size()-1]);
//         v.pop_back();
//         heapify(0);
//     }

//     int top(){
//         return v[0];
//     }

//     bool empty(){
//         return v.empty();
//     }

//     int size(){
//         return v.size();
//     }

// };

class minHeap {

	vector<int> v;

	void heapify(int i) {

		int minIdx = i;

		int leftIdx = 2*i + 1;
		if(leftIdx < v.size() and v[leftIdx] < v[minIdx]) {
			minIdx = leftIdx;
		}

		int rightIdx = 2*i + 2;
		if(rightIdx < v.size() and v[rightIdx] < v[minIdx]) {
			minIdx = rightIdx;
		}

		if(minIdx != i) {
			swap(v[i], v[minIdx]);
			heapify(minIdx);
		}
	}

	public :

		void push(int data) {
			v.push_back(data); // it may violate the heap property at the parent of the newly inserted node
			int childIdx = v.size() - 1;
			int parentIdx = childIdx%2 == 0 ? childIdx/2 - 1 : childIdx/2;
			while(parentIdx >= 0 and v[childIdx] < v[parentIdx]) {
				swap(v[childIdx], v[parentIdx]);
				childIdx = parentIdx;
				parentIdx = childIdx%2 == 0 ? childIdx/2 - 1 : childIdx/2;
			}
		}

		void pop() {
			swap(v[0], v[v.size()-1]);
			v.pop_back();
			heapify(0);
		}

		int top() {
			return v[0];
		}

		int size() {
			return v.size();
		}

		bool empty() {
			return v.empty();
		}

};


class maxHeap{
    vector<int> v;

    void heapify(int i){
        int min_index = i;
        int left_child = 2*i +1;
        if(v[min_index] < v[left_child]){
            min_index = left_child;
        }
        int right_child = 2*i +2;
        if(v[min_index] < v[right_child]){
            min_index = right_child;
        }

        if(min_index!= i){
            swap(v[i],v[min_index]);
            heapify(min_index);
        }
    }


    public:
    void push(int data){
        v.push_back(data);
        int child_index = v.size()-1;
        int parent_index = child_index%2==0? child_index/2 -1 : child_index/2;
        while(parent_index>= 0 and v[child_index] > v[parent_index]){
            swap(v[child_index],v[parent_index]);
            child_index = parent_index;
            int parent_index = child_index%2==0? child_index/2 -1 : child_index/2;
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

    bool empty(){
        return v.empty();
    }

    int size(){
        return v.size();
    }

};

int main(){
    minHeap m;

	m.push(9);
	m.push(7);
	m.push(8);
	m.push(5);
	m.push(4);
	m.push(6);
	m.push(3);
	m.push(2);
	m.push(1);

	cout << m.size() << endl;

	while(!m.empty()) {
		cout << m.top() << " ";
		m.pop();
	}

	cout << endl;

	cout << m.size() << endl;

    return 0;
}