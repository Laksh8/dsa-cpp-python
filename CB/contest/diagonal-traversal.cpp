#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int c[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c[i][j];
        }
    }
    for(int i=0;i<=n+m-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int a=j,b=i-j;
            if(i%2==0)
            {
                swap(a,b);
            }
            if(a>=n || b>=m)
            {
                continue;
            }
            cout<<c[a][b]<<" ";
        }
    }
    return 0;
}