#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
for(int i =1;i<=n;i++)     
{
    for(int j =1;j<=n;j++)  //prints the stars in the row
    {
        if(i == j || i + j == n + 1)        
        {
            cout<<"*\t";                                           
        }
        else                        
            cout<<"\t";    
        }
        cout<<endl; 
    }

}

/*

Sample Input
5

Sample Output

*				*	
	*		*		
		*			
	*		*		
*				*	

*/