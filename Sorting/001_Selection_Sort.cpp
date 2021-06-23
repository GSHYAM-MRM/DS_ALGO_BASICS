#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,34,55,32,37,3,1};
    int n = 8;

    int temp, idx = -1;

    for(int i=0; i<n-1; i++)
    {
        temp = arr[i];
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < temp){
                temp = arr[j];
                idx = j;
            }
        }
        if(idx != -1)
        {
            arr[idx] = arr[i];
            arr[i] = temp;
            idx = -1;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
