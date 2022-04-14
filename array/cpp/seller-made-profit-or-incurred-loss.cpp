#include<iostream>

using namespace std;

int main(){
    float cost,sell,variance;
    cout<<"Enter cost price of item :";
    cin>>cost;
    cout<<"Enter selling price of item :";
    cin>>sell;
    variance = sell-cost;
    if(variance>=0){
        cout<<"Profit :"<<variance;
    }else{
        cout<<"Loss :"<<-variance;
    }
}