#include<iostream>
using namespace std;

string str[] = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
void printChar(string imp,char out[],int i,int j){
    // base case
    if(imp=="\0"){
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }
    int d =(imp[0] - '0');
    if(d==0 or d==1 ){

        printChar(imp.substr(1),out,i+1,j);
        return;
    }
    // recursive case
    for(char c_k : str[(imp[0] - '0')]){
        out[j] = c_k;
        printChar(imp.substr(1),out,i+1,j+1);
    }
}

int main(){

    string imp = "1237";
    char out[50];
    printChar(imp,out,0,0);
    return 0;
}