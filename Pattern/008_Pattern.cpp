#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int num = 1;
    //write your code here
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<num<<"\t";
            num++;
        }
        cout<<endl;
    }
}

/*
1	
2	3	
4	5	6	
7	8	9	10	
11	12	13	14	15
*/