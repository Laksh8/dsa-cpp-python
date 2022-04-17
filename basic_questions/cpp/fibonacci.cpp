// 0 1 1 2 3 5 8
#include<iostream>

using namespace std;

int main(){
    int n;
    
    cout<<"Enter Value of N : ";
    cin>>n;
    
    int first=0,second=1;
    
    if(n<2 and n>-1){
        cout<<"YES";        
        return 0;
    }else if(n<0){
        cout<<"Negative Values are not accepted."<<endl;
        return 0;
    }

    while(second<n){
        int temp = second;
        second = first+second;
        first = temp;
        if(second==n){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;

}