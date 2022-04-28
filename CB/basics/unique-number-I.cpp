#include<iostream>
using namespace std;

// 7
// 1 1 2 2 3 3 4 


int main(){
    int n;
    cin>>n;
    int x;
    bool flag = true;
    int temp = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i==0 or flag){
            temp = x;
            flag=false;
            continue;
        }
        if(x == temp){
            flag=true;
        }
    }
    cout<<temp;
    return 0;
}