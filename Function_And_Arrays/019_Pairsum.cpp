#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int pairSum(int a[], int n, int sum)
{
    int low = 0;
    int high = n-1;

    while(low <= high)
    {
        if(a[low] + a[high] == sum)
        {
            return true;
        }
        else if(a[low] + a[high] >= sum)
        {
            high --;
        }
        else
        {
            low ++;
        }
    }

    return false;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<pairSum(a,n,31)<<endl;

    return 0;
}