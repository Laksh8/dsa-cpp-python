#include<iostream>
using namespace std;

void sub_sequence(char str[],char out[],int i,int j,int &count){
    // base case
    if(str[i]=='\0'){
        out[j] = '\0';
        cout<<out<<" ";
        count++;
        return;
    }
    // recursive case
    // Exclude ith char
    sub_sequence(str,out,i+1,j,count);
    out[j] = str[i];
    // Include ith char
    sub_sequence(str,out,i+1,j+1,count);
}


int main(){
    char str[100000], out[100000];
    cin>>str;
    int count = 0;
    sub_sequence(str,out,0,0,count);
    cout<<endl<<count<<endl;
    return 0;
}