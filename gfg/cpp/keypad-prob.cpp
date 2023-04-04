#include<bits/stdc++.h>
using namespace std;




string arr[] = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };

void keypad( string n , string &out,int &count ){

    // base case
    if(n == ""){
        // cout<<out<<endl;
        count++;
        return;
    }


    // recursive case
    string s = arr[n[0] - '0'];
    for(int i=0;i<s.size();i++){
        out.push_back(s[i]);
        keypad( n.substr(1),out,count);
        out.pop_back();
    }
}


int main(){
    string n;
    cin>>n;
    string out = "";
    int count = 0;
    keypad(n,out,count );
    cout<<count<<endl;
    return 0;
}