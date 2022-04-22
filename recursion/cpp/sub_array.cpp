#include<iostream>

using namespace std;


int sub_array(int arr[],int start){
    return 0;
}

int main(){
    int arr[4] = {1,2,3,4};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arrSize;i++){
        for(int j=i;j<arrSize;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }

}