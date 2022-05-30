#include<iostream>
using namespace std;


int f(int arr[],int n,int index ,int target){
    // Base condition
    if(index==n){
        return -1;
    }

    if(arr[index] == target){
        return index;
    }

    // recursive
    return f(arr,n,index+1,target);

}



int main(){
    int arr[] = {1,2,7,4,5,5,7,9, 7};
    int n = 10;
    int target = 7;
    cout << f(arr,n,0,target);
    return 0;
}