#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int x;
    int n1 = n;

    //write your code here
    int count = 0;
    
    while(n1 > 0)
    {
        n1 = n1 / 10;
        count ++;
    }
    
    int d = 1;
    for(int i=1; i<count; i++)
    {
        d *= 10;
    }
    
    while(d != 0)
    {
        x = n / d;
        cout<<x<<endl;
        n %= d;
        d /= 10;
    }
    return 0;   
}
