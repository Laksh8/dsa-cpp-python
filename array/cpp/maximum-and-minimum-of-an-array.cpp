#include<bits/stdc++.h>

using namespace std;


int main(){
    int arr[100],n;
    cout<<"Enter a Value :";
    cin>>n;
    int max=INT_MIN,min=INT_MAX;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"MAX Value: "<<max<<"\nMIN Value: "<<min;
    return 0;
}



