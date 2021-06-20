/*5

*	*	*		*	*	*	
*	*				*	*	
*						*	
*	*				*	*	
*	*	*		*	*	*

*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int st1 = n/2 + 1;
    int sp = 1;

    for(int i=1; i<= n; i++)
    {
        for(int k=1; k<=st1; k++)
        {
            cout<<"*\t";
        }
        for(int j=1;j<=sp; j++)
        {
            cout<<"\t";
        }
        for(int l=1; l<=st1; l++)
        {
            cout<<"*\t";
        }
        if(i <= n/2)
        {
            st1--;
            sp+=2;
        }
        else
        {
            st1++;
            sp-=2;
        }
        cout<<endl;
    }
    
}