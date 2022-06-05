#include<iostream>
using namespace std;


void generatePermutation(char arr[],int i,int n){
    // base case
    if(arr[i]=='\0'){
        cout<<arr<<endl;
        return;
    }
    // recursive case
    for(int j=i;j<n;j++){
        swap(arr[i],arr[j]);
        generatePermutation(arr,i+1,n);
        swap(arr[j],arr[i]);
    }
    
}


int main(){
    int n;
    char arr[] = "abc";
    generatePermutation(arr,0,sizeof(arr));
    return 0;
}