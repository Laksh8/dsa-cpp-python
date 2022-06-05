#include<iostream>
using namespace std;
void calcTwins(string s, int n, int* count){
    if(n <=0 ) return;
    calcTwins(s, n-1, count);
    if(s[n] == s[n-2]){
        (*count)++;
    }
}
int main() {
    string s;
    cin >> s;
    int n = s.length(), count=0;
    calcTwins(s,n-1, &count);
    cout << count;
    return 0;
}