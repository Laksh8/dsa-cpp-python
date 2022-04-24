#include<iostream>
using namespace std;


int main(){
    char x;
    
    int space_count=0,lower_count=0,upper_count=0,digit=0,special=0;
    while(true){
        x = cin.get();
        if(x=='$'){
            break;
        }
        if(x>='a' and x<='z'){
            lower_count +=1;
        }else if(x>='A' and x<='Z'){
            upper_count+=1;
        }else if( x== ' ' or x=='\n' or x=='\n'){
            space_count+=1;
        }else if(x>='0' and x<='9'){
            digit+=1;
        }else{
            special+=1;
        }

    }
    cout<< space_count <<" "<< lower_count <<" "<< upper_count<<" "<<digit<<" "<<special;
    return 0;
}