#include<iostream>

using namespace std;

int main(){
    int expense;
    cout<<"Enter Value on Expense :";
    cin>>expense;

    if(expense>5000){
        cout<<"Value of Order :"<<expense*.9<<endl;
    }else{
        cout<<"Value of Order :"<<expense<<endl;
    }

    return 0;
}