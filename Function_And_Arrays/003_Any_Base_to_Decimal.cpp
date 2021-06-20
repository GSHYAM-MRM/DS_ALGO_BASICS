#include <iostream>
#include <cmath>

using namespace std;

int decimalToAnyBase(int n,int b)
{
    int rem, val, ans = 0, i = 0;
    while(n > 0)
    {
       rem = n % 10;
       val = pow(b,i);
       ans += (rem*val);
       i++;
       n = n / 10;
    }
    return ans;
}
int main()
{
    int n, b;
    cin>>n>>b;
    cout<<decimalToAnyBase(n,b)<<endl;
    return 0;
}