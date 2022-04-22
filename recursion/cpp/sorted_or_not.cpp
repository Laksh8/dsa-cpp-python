#include<iostream>

using namespace std;


int sorted_or_not(int arr[],int start,int end){
    if(start>end-1){
        return 1;
    }
    
    if(arr[start-1]>arr[start]){
        // cout<<arr[start-1]<<" "<<arr[start]<<endl;
        return 0;
    }

    return sorted_or_not(arr,start+1,end);
}


int main(){
    int arr[10] = {0,1,2,3,36,4,5,6,7,8};
    int flag = sorted_or_not(arr,1,10);
    if (flag)
        cout<<"SORTED";
    else
        cout<<"not sorted";
    return 0;
}