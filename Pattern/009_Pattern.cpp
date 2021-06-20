#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int f1 = 0;
    int f2 = 1;
    int f3;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<f1<<"\t";
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        cout<<endl;
    }
}

/*
0	
1	1	
2	3	5	
8	13	21	34	
55	89	144	233	377	
*/