#include<iostream>

using namespace std;
 

void subSet(int arr[],int out[],int i,int j,int n,int target,int &count){
    // base case
    if(i==n){
        int sum = 0;
        for(int k=0;k<j;k++){
            sum+=out[k];
        }
        // for(int k=0;k<j;k++){
        //     cout<<out[k]<<" ";
        // }
        if(target == sum){
            count++;
            for(int k=0;k<j;k++){
                cout<<out[k]<<" ";
            }
            cout<<" ";
        }
        return;
    }
    // recursive case
    out[j] = arr[i];
    subSet(arr,out,i+1,j+1,n,target,count);
    
    subSet(arr,out,i+1,j,n,target,count);
    

}



int main(){
    int n ;
    cin>>n;
    int arr[10000],out[10000];
    for(int i=0;i<n;cin>>arr[i],i++);
    int target;
    cin>>target;
    int count = 0;
    subSet(arr,out,0,0,n,target,count);
    cout<<endl<<count<<endl;
    return 0;
}