#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,30};
    int n = sizeof(arr)/ sizeof(int);

    int target;
    cout<<"Target Value :"<<endl;
    cin>>target;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            cout<<i<<" ";
            flag=false;
        }
    }


    if(flag){
        cout<<-1;
    }
    return 0;
}