#include<iostream>
using namespace std;

void paws(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 5;
    int y = 6;
    paws(x,y);
    cout<<x<<"  "<<y;
    return 0;
}