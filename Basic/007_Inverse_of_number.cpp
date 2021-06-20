#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int n1 = n;
    
    int count = 0;

    while(n > 0)
    {
        n /= 10;
        count++;
    }
    
    int power, dig, fans=0, modd;
    while(n1 > 0)
    {
        power = pow(10,count-1);
        dig = n1 / power;
        modd = pow(10, dig-1);
        fans += count * modd;
        count --;
        n1 %= power;
    }
    
    cout<<fans<<endl;
    return 0;
    
}