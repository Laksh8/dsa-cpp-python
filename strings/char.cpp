#include<iostream>

using namespace std;

int main(){
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    int start_lower_case = int('a'),end_lower_case = int('z');
    int start_upper_case = int('A'),end_upper_case = int('Z');
    int start_int = int('0'), end_int = int('9');

    if(start_lower_case<=int(ch) and int(ch) <=end_lower_case){
        cout<<"LOWER";
    }
    else if(start_upper_case<= int(ch) and int(ch)<=end_upper_case){
        cout<<"UPPER";
    }
    else if(start_int<=int(ch) and int(ch) <=end_int){
        cout<<"INTEGER";
    }
    else{
        cout<<"SPECIAL ";
    }
    return 0;
}