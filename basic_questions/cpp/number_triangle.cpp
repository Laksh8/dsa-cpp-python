#include<iostream>


//    1
//   232
//  34543
// 4567654

using namespace std;

int main(){
int n;
    cout<<"Enter Value of N :";
    cin>>n;
    int i=1;
    int k = 1;
    while(i<=n){
        int j = n;
        while(j>i){
            cout<<" ";
            j--;
        }
        j = 1;
        k = i;
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        j = 2;
        k-=2;
        while(j<=i){
            cout<<k;
            j++;
            k--;
        }
        cout<<endl;
        i++;
    }
}