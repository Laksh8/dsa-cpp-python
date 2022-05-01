#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int n = 5;
    int target; 
    cout<<"Enter Value of Target : ";
    cin>>target;
    int s=0,e=n-1;
    while(s<=e){
        int m = (s+e)/2;
        if(arr[m]==target){
            cout<<"Target is at index "<<m<<endl;
            break;
        }else if(arr[m]<target){
            s=m+1;
        }else{
            e=m-1;
        }
    }

    if(s>e){
        cout<<"-1";
    }
    return 0;
}