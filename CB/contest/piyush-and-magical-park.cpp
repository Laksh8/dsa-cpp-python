#include<iostream>
using namespace std;

int main(){
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char str[n][m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>str[i][j];
        }
        str[i][m]='\0';
    }
    



    for(int i=0;i<n;i++){   
        for(int j=0;j<m;j++){
            if(str[i][j] == '.'){
                s-=3;
            }else if(str[i][j] == '*'){
                s+=4;
            }else{
                if(j==m-1)
                    s++;
                else 
                    s--;
                break;

            }
            if(j==m-1)
                s++;
        }
        
    }
    if(s>k){
        cout<<"Yes"<<endl<<s;
    }else{
        cout<<"No"<<endl;
    }
    return 0;

}