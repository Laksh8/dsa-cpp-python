#include <iostream>

/* n = 7
*******
*** ***
**   **
*     *
**   **
*** ***
*******
*/
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    // first row
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=n/2;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        
        for(int j=0;j<2*(n/2-i)+1;j++){
            cout<<" ";
        }
        
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // lower start pattern
    for(int i=2;i<=n/2;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        
        for(int j=0;j<2*(n/2-i)+1;j++){
            cout<<" ";
        }
        
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    // last row
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    
    
    return 0;
}