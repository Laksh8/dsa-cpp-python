#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[26] = {};
    string str="aabcdbdc";
    queue<char> q;

    for(int i=0;i<str.size();i++){
        if(arr[str[i] - 'a']<1){
            arr[str[i] - 'a']++;
            q.push(str[i]);
        }
        else{
            arr[str[i] - 'a']++;
        }
        while(!q.empty() and arr[q.front() - 'a'] > 1 ){
            q.pop();
        }
        (!q.empty() ?cout<<  char(q.front())<<" " :cout<<  '-'<<'1' <<" ") ;
    }
    return 0;
}