#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int p1 = 1;
    int p0 = 0;
    int p3 = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<p1<<"\t";
            p1 =  p0 + p1;
            p0 = p3;
            p3 = 1;
        }
    }
    
}

/*
Complete the Solution
1	
1	1	
1	2	1	
1	3	3	1	
1	4	6	4	1	
*/