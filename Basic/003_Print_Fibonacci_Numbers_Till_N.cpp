#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    int f1 = 0; 
    int f2 = 1;
    int f3;
    
    cout<<f1<<endl;
    cout<<f2<<endl;
    
    for(int i=0; i<n-2; i++)
    {
        f3 = f1 + f2;
        cout<<f3<<endl;
        f1 = f2;
        f2 = f3;
    }
    return 0;
}