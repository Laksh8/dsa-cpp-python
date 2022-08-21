#include<iostream>
#include<vector>
using namespace std;


void print(vector<int> &arr,int n ,int start ){
    // base case
    
    if(start == n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }

    // recursive case
    for(int i=start;i<n;i++){
        swap(arr[i],arr[start]);
        print(arr,n,start+1);
        swap(arr[i],arr[start]);
    }

}



int main(){

    vector<int> arr = {1,2,3};
    int n = arr.size();
    print(arr,n,0);
    return 0;
}