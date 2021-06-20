#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int m, n;
    cin>>n>>m;
    int a[n][m];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    
    int cnt = 0;
    int minr = 0;
    int minc = 0;
    int maxr = n - 1;
    int maxc = m - 1;
    int nofe = n * m;
    
    while(cnt < nofe)
    {
        //left wall
        for(int i=minr, j=minc ; i <= maxr && cnt < nofe; i++)
        {
            cout<<a[i][j]<<endl;
            cnt++;
        }
        minc++;
        //btm wall
        for(int i=maxr, j=minc ; j <= maxc && cnt < nofe; j++)
        {
            cout<<a[i][j]<<endl;
            cnt++;
        }
        maxr--;
        
        //right wall
        for(int i=maxr, j=maxc ; i >= minr && cnt < nofe; i--)
        {
            cout<<a[i][j]<<endl;
            cnt++;
        }
        maxc--;
        
        //top wall
        for(int i=minr, j=maxc ; j >= minc && cnt < nofe; j--)
        {
            cout<<a[i][j]<<endl;
            cnt++;
        }
        minr++;
    }
    return 0;
}