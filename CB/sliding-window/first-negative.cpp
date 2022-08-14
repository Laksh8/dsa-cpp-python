#include<iostream>
#include<vector>
#include<queue>
using namespace std;


vector<int> k_negative(int arr[],int n,int k){

    vector<int> v;
    queue<int> q;

    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push(arr[i]);
        }
    }

    !q.empty() ? v.push_back(q.front()) : v.push_back(0);
    
    for(int i=k;i<n;i++){
        if(!q.empty() and  arr[i-k] == q.front()){
            q.pop();
        }
        


    }

} 


int main(){

    return 0;
}