#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    
    int a[m][n];
    
    for(int i = 0; i < m ; i++ )
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    
    for(int i = 0; i < n ; i++ ){
        
        if(i % 2 == 0)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[j][i]<<endl;
            }
        }
        else
        {
            for(int j=m-1; j>=0; j--)
            {
                cout<<a[j][i]<<endl;
            }
        }
    }
    return 0;
}