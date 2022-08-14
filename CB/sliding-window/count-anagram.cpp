#include<iostream>
#include<map>

using namespace std;

bool compare_map(int arr[],int brr[]){
    
}


int count_anagram(string s,string k){

    int k_window[26] = {};
    int s_window[26] = {};


    for(int i=0;i<k.size();i++){
        k_window[ k[i] - 'a' ] ++;
        s_window[ s[i] - 'a' ] ++;
    }



    


}


int main(){

    return 0;
}