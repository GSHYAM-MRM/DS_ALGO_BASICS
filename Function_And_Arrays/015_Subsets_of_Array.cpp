#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    
    int ptwo = pow(2,n);
    for(int i=0; i<ptwo; i++)
    {
        int c[n] = {0};
        int temp = i;
        for(int j=n-1; j>=0; j--)
        {
            int rem = temp % 2;
            temp = temp / 2;
            
            if(rem == 0)
            {
                c[j] = 0;
            }
            else
            {
                c[j] = a[j];
            }
        }
        
        for(int k=0; k<n; k++)
        {
            if(c[k] == 0)
                cout<<"-\t";
            else
                cout<<c[k]<<"\t";
        }
        cout<<endl;
    }
    
}