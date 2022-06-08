#include<iostream>
#include<set>
using namespace std;

void compare(string &str,int i,int n ,set<string> &s){
    // base case
    if(str[i]== '\0'){
        string value = str;
        s.insert(value);
        return;
    }
    // recursive case
    for(int j=i;j<n;j++){
        swap(str[i],str[j]);
        compare(str,i+1,n,s);
        swap(str[i],str[j]);
    }
}



int main(){
    string str;
    set<string> s;
    char out[10000];
    cin>>str;
    compare(str,0,str.size(),s);
    for(string i :s){
        if(i<str)
            cout<<i<<endl;
    }
    return 0;
}