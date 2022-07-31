#include<iostream>
#include<queue>
#include<vector>
using namespace std;
// 60 , 50,10,-1,20,30,-1,40,-1,.... k=3
int main(){
    priority_queue<int,vector<int>,greater<int>> minHeap;
    int n;
    cin>>n;
    int data;
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>data;
        minHeap.push(data);
    }
    while(true){
        cin>>data;
    }
    return 0;
}