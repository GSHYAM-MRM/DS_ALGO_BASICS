#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    int data;
    cin>>data;
    
    // write your code here
    int l = 0;
    int h = n-1;
    int mid = (l + h)/2;
    
    while(l <= h)
    {
        mid = (l + h) / 2;
        if(data > a[mid])
        {
            l = mid + 1;
        }
        else if(data < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            cout<<data<<endl;
            return 0;
        }
    }
    
    cout<<a[l];
    cout<<endl;
    cout<<a[h];
    
}