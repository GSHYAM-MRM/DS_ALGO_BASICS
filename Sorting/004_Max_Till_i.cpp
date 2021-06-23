#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int mx = INT_MIN;

    for(int i=0; i<n; i++)
    {
        mx = max(mx, a[i]);
        cout<<mx<<" ";
    }
    return 0;
}
