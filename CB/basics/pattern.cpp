#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int char_A = int('A');
        for(int j=n;j>i;j--){
            cout<<char(char_A);
            char_A++;
        }
        char_A--;
        for(int j=n;j>i;j--){
            cout<<char(char_A);
            char_A--;
        }
        cout<<endl;
    }
}