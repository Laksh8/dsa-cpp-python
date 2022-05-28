#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sc=0,sr=0;
    int ec=n-1,er=m-1;
    while(sr<=er and sc<=ec){
        // print first column
        for(int i=sr;i<=er;i++){
            cout<<arr[i][sc]<<", ";
        }
        sc++;

        // print last row
        for(int i=sc;i<=ec;i++){
            cout<<arr[er][i]<<", ";
        }
        er--;

        if(ec>=sc){
            // print last column reverse
            for(int i=er;i>=sr;i--){
                cout<<arr[i][ec]<<", ";
            }
            ec--;
        }
        if(er>=sr){
            // print first row reverse
            for(int i=ec;i>=sc;i--){
                cout<<arr[sr][i]<<", ";
            }
            sr++;
        }
    }


    cout<<"END";

    return 0;
}