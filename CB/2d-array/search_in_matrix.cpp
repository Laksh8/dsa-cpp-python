#include<iostream>
using namespace std;



// return multiple values in c++ 
/*
    pair <int,int> p;
    p = {1,2};
        or
    p = make_pair(1,2);
    p.first; //1
    p.second; //2
*/

pair <int,int> search(int arr[][3],int target){
        
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(target==arr[i][j]){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}


int main(){

    int arr[3][3]={
        {1,2,3},{4,5,6},{7,8,9}
    };
    int target;
    cin>>target;
    pair<int,int> p = search(arr,target);
    cout<<p.first<<" "<<p.second;
    return 0;
}