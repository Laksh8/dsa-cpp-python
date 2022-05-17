#include<iostream>
#include<cstring>

using namespace std;

void remove_duplicate(char *str){
    char ch = '\0';
    int count = 0;
    for(int i=0;i<=strlen(str);i++){
        if(ch != str[i]){
            if(count>1)
                cout<<count;
            cout<<str[i];
            ch=str[i];
            count=0;
        }
        count++;
    }
}   


int main(){
    char str[1000];
    cin>>str;
    remove_duplicate(str);
    return 0;
}




// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n],brr[n];
//     int arr_num[10]={};
//     int brr_num[10]={};
//     long long crr[2*n]={};
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         arr_num[arr[i]] +=1;
//     }
//     for(int i=0;i<n;i++){
//         cin>>brr[i];
//         brr_num[brr[i]] +=1;
//     }
//     int count =0;
//     for(int i=0;i<10;i++){
//         // cout<<i<<"    "<<arr_num[i]<<" BRR "<<brr_num[i]<<endl;
//         cout<<i<<"   "<<min(arr_num[i],brr_num[i])<<endl;
//         for(int j=0;j<min(arr_num[i],brr_num[i]);j++){
//             if( arr_num[i]==0 or brr_num[i]==0)
//                 continue;
//             crr[count] = i;
//             count++;
//         }
//     }

//     cout<<"[";
//     for(int i=0;i<count-1;i++){
//         cout<<crr[i]<<", ";
//     }
//     cout<<crr[count-1]<<"]";



//     return 0;
// }