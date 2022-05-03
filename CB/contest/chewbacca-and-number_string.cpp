
#include<iostream>

using namespace std;

int main() {
string x;
cin>>x;
for(int i=0; i<x.length(); i++){
if(i==0 && ((x[i]-'0')==9) ){
continue;
}
if( (x[i]-'0' ) >= 5 ){
x[i] = (9 - (x[i]-'0'))+'0';
}
}
cout<<x<<endl;
return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     string x;
//     cin>>x;
//     for(int i=0;i<x.length();i++){
//         if(x[i]-'0' > '9'-x[i]){
//             cout<<'9'-x[i];
//         }else{
//             cout<<x[i]-'0';
//         }
//     }

//     return 0;
// }