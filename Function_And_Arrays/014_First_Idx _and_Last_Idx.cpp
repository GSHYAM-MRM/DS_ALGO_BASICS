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
    int x = -1;
    for(int i=0; i<n; i++)
    {
        if(data == a[i])
        {
            x = i;
            break;
        }
    }
    
    int j = x;
    while(a[j] == data)
    {
        j++;
    }
    //j++ will be made to the next index, so write j-1 is the last idx
    if(x == -1)
        cout<<x<<endl<<x;
    else
        cout<<x<<endl<<j-1;
}