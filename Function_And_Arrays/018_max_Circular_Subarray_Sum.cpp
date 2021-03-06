#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int kadane(int a[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN; 

    for(int i=0; i<n; i++)
    {
        currentSum += a[i];
        if(currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
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

    int currentSum = 0;

    int wrapsum = 0;
    int nonwrapsum;

    nonwrapsum = kadane(a,n);

    int totalsum = 0;
    for(int i=0; i<n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }

    wrapsum = totalsum + kadane(a,n);

    cout<<max(wrapsum,nonwrapsum)<<endl;

    return 0;
}