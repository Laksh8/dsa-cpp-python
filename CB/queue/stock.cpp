#include<iostream>
#include<stack>
#include<utility>
using namespace std;


int main(){
    int n = 7;
    int arr[] = {100,80,60,70,60,75,85};
    stack<pair<int,int>> s;
    int brr[7];
    for(int i=0;i<n;i++){
        while(!s.empty() and s.top().second < arr[i]){
            s.pop();
        }
        int j;
        if(s.empty()){
            j = -1;
        }
        else{
            j = s.top().first;
        }
        
    }

    return 0;
}