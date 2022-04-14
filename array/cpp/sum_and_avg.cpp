#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter value of N :";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"SUM :"<<sum <<"\nAVG :"<<sum/n;
    return 0;
}