#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int arr[] = {1,2,3},n=3;
    for(int i=0;i<pow(2,n);i++){
        int j = 0;

        while(j<=n){
            if((i>>j) & 1){
                cout<<arr[j]<<" ";
            }
            j+=1;
        }
        cout<<endl;
    }
    return 0;
}