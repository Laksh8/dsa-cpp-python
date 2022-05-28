#include<iostream>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;
    int arr[10][10];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sc = 0,sr=0;
    int ec=n-1,er=m-1;
    while(sc<=ec and sr <=er ){
        // print first row
        for(int i=sc;i<=ec;i++){
            cout<<arr[sr][i]<<", ";
        }
        sr++;

        // print last column
        for(int i=sr;i<=er;i++){
            cout<<arr[i][ec]<<", ";
        }
        ec--;
        
        if(sr<=er){
            // print last row reverse
            for(int i=ec;i>=sc;i--){
                cout<<arr[er][i]<<", ";
            }
            er--;
        }
        
        if( sc<=ec){
            // print first column reverse
            for(int i=er;i>=sr;i--){
                cout<<arr[i][sc]<< ", ";
            }
            sc++;
        }
    }

    cout<<"END";
    return 0;
}