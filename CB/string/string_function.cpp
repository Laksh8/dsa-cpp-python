#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string str = "hello world";
    // Length of String
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;

    // Concat
    string str1="hello";
    string str2="world";
    // str1.append(str2);
    str1 = str1+str2;
    cout<<str1<<endl;

    // String compare
    str1="zxy";
    str2="hello";
    cout<<str2.compare(str1)<<endl;

    if(str1 == str2){
        cout<<"equal"<<endl;
    }else if( str1 > str2 ){
        cout<<str1<<"is greater"<<endl;
    }else{
        cout<<str2<<"is greater"<<endl;
    }

    str2 = "hellolloworld";
    // string find substring
    cout<<str2.find("llo")<<endl;
    cout<<str2.rfind("ell")<<endl;
    cout<<str2.find("xyz")<<endl;
    cout<<string::npos<<endl;

    if(str2.find("blocks") == string::npos){
        cout<<"block is not present"<<endl;
    }else{
        cout<<"Block is present"<<endl;
    }

    string str6 = "hello world";
    cout<<str6.substr(2)<<endl;
    cout<<str6.substr(2,4)<<endl;

    string str7="new delhi";
    char *abc = (char *)str7.c_str();
    cout<<abc<<endl;

    char a[] = "hello world";
    string str8 = a;
    cout<<str8<<endl;
    reverse(str8.begin(),str8.end());
    cout<<str8<<endl;
    return 0;
}