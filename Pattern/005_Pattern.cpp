#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<i; k++)
        {
            cout<<"\t";
        }
        cout<<"*\t";
        cout<<endl;
    }
    
}

/*

5

*	
	*	
		*	
			*	
				*	

*/