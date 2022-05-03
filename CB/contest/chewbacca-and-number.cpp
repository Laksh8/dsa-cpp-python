#include<iostream>
using namespace std;

int main(){
    unsigned long long int n;
    int arr[1000];
    cin>>n;
    int count=0;
    while(n){
        arr[count] = n%10;
        count++;
        n/=10;
    }
    for(int i=count-1;i>-1;i-- ){
        if(i==count-1 and arr[i]==9){
            cout<<arr[i];
            continue;
        }

        if(arr[i]>=9-arr[i]){
            cout<<9-arr[i];
        }else{
            cout<<arr[i];
        }
    }

    return 0;
}