#include<iostream>
using namespace std;

// 7
// 1 1 2 2 3 3 4 


int main(){
    int n;
    cin>>n;
    int x;
    bool flag = true;
    int temp = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>x;
        if(temp==x){
            flag=true;
        }
        if(flag and !temp==x){
            temp=x;
            flag=false;
        }
        cout<<temp;
    }
    return 0;
}