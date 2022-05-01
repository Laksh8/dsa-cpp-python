#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int fi=INT_MIN,se=INT_MIN,th=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(fi<arr[i]){
            th = se;
            se = fi;
            fi = arr[i];
        }else if(se<arr[i]){
            th = se;
            se = arr[i];
        }else if(th<arr[i]){
            th = arr[i];
        }
    }

    cout<<fi<<"\n"<<se<<"\n"<<th;
    return 0;
}