#include<iostream>
#include<unordered_set>
using namespace std;


int longest_palindrome(string s){
    unordered_set <char> seen;

    int count = 0;

    for(char ch:s){
        if(seen.find(ch) != seen.end() ){
            count +=2;
            seen.erase(ch);
        }else{
            seen.insert(ch);
        }
    }
    if(!seen.empty()){
        count++;
    }

    return count;

}


int main(){
    string  s = "abccccdd";
    cout<<longest_palindrome(s)<<endl;
    return 0;
}