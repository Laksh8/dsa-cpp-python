#include<iostream>
using namespace std;

int main(){

    int *ptr = new int;
    *ptr = 10;
    delete ptr;
    ptr = new int;
    *ptr = 20;
    // dynamic array creation
    int n = 10;
    int *arr = new int[n];
    // increase array size in run time 
    int *arr = new int[1];
    // vector is dynamic array
    
    return 0;
}