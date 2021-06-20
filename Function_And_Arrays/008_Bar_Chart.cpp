/*

5
3
1
0
7
5

			*		
			*		
			*	*	
			*	*	
*			*	*	
*			*	*	
*	*		*	*	

*/

#include<iostream>
#include <algorithm>

using namespace std;


int main(){
    
    int n;
    cin>>n;
    
    int *a = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    int max = *max_element(a, a+n);
    
    for(int i=0; i<max; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(max - a[j] <= i)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    
}