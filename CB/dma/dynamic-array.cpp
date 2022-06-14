#include<iostream>
using namespace std;

int* resize(int * A,int &capacity){
    capacity *=2;
    int *B = new int [capacity];
    for(int i=0;i<capacity;i++){
        B[i] = A[i];
    }
    delete [] A;
    return B;
}


int main(){

    int cap=1;
    int i=0;
    int * A = new int [cap];   
    int data;
    cin>>data;
    while(data != -1){
        A[i] = data;
        i++;
        if(i==cap){
            A = resize(A,cap);
        }
    }
    return 0;
}