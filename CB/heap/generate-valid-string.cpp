#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    string str = "aabcaba";
    int freq[26] = {0};
    for(char ch :str)
        freq[ch -'a'] ++;
    for(int i=0;i<26;i++){
        cout<<freq[i]<<" ";
    }
    priority_queue<pair<int,char>> maxHeap;
    return 0;
}