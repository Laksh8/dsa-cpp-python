#include<iostream>
#include<queue>
#include<vector>
using namespace std;
// 60 , 50,10,-1,20,30,-1,40,-1,.... k=3
int main(){
    priority_queue<int,vector<int>,greater<int>> minHeap;
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    for(int i=0;i<k;i++){
        minHeap.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(minHeap.top() < arr[i]){
            minHeap.pop();
            minHeap.push(arr[i]);
        }
    }

    while(!minHeap.empty()){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }

    return 0;
}