#include<iostream>


using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;  cin>>arr[i] ,i++);
    int m;
    cin>>m;
    int brr[1000];
    for(int i=0;i<m;  cin>>brr[i] ,i++);
    int carry = 0;
    int crr[1000];
    if(m>n){
        for(int i=m-1;i>-1;i--){
            n--;
            if(n>=0){
                crr[i] = brr[i]+arr[n] + carry;
                carry=0;
                if(crr[i]/10>0){
                    carry=crr[i]/10;
                    crr[i] = crr[i]%10;
                    cout<<crr[i] <<" CARRY "<<carry<<endl;
                }
            }
            else{
                crr[i] = brr[i]+ carry;
                if(crr[i]/10>0){
                    carry=crr[i]/10;
                    crr[i] = crr[i]%10;
                    cout<<crr[i] <<" CARRYAA "<<carry<<endl;
                }
            }
        }
        if(carry)
            cout<<carry<<", ";
        for(int i=0;i<m;i++){
            cout<<crr[i]<<", ";
        }
        cout<<"END";
    }else{
        for(int i=n-1;i>-1;i--){
            m--;
            if(m>=0){
                crr[i] = brr[m]+arr[i] + carry;
                carry=0;
                if(crr[i]/10>0){
                    carry=crr[i]/10;
                    crr[i] = crr[i]%10;
                }
            }
            else{
                crr[i] = arr[i]+ carry;
                if(crr[i]/10>0){
                    carry=crr[i]/10;
                    crr[i] = crr[i]%10;
                }
            }
        }
        if(carry)
            cout<<carry<<", ";
        for(int i=0;i<n;i++){
            cout<<crr[i]<<", ";
        }
        cout<<"END";
    }

    

    return 0;
}