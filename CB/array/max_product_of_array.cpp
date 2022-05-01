#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int fl=INT_MIN,sl=INT_MIN,tl=INT_MIN,fs=INT_MAX,ss=INT_MAX;
    for(int i=0;i<n;i++){
        if(fl<arr[i]){
            tl = sl;
            sl=fl;
            fl=arr[i];
        }else if(sl<arr[i]){
            tl = sl;
            sl=arr[i];
        }else if(tl<arr[i]){
            tl = arr[i];
        }

        if(fs>arr[i]){
            ss = fs;
            fs=arr[i];
        }else if(ss>arr[i]){
            ss=arr[i];
        }
    }
    cout<<max(fl*sl*tl,ss*fs*fl);

    return 0;
}