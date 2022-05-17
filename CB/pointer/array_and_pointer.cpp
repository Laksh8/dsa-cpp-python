#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" == "<<*(arr+i)<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<6;i++){
        cout<<&arr[i]<<" == "<<arr+i<<endl;
    }
   
    int x=10;
    int *xptr = &x;
    int **xxptr = &xptr;
    int ***xxxptr = &xxptr;
    cout<<x<<endl;
    cout<<*xptr<<endl;
    cout<<**xxptr<<endl;
    cout<<***xxxptr<<endl;
    return 0;
}