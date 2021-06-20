#include <iostream>
#include <cmath>

using namespace std;

int decimalToAnyBase(int n,int b1, int b2)
{
    int rem, val, ans = 0,ans1 = 0, i = 0;
    while(n > 0)
    {
       rem = n % 10;
       val = pow(b1,i);
       ans += (rem*val);
       i++;
       n = n / 10;
    }
    i = 0;
    while(ans > 0)
    {
       rem = ans % b2;
       val = pow(10,i);
       ans1 += (rem*val);
       i++;
       ans = ans / b2;
    }
    return ans1;
}
int main()
{
    int n, b1, b2;
    cin>>n>>b1>>b2;
    cout<<decimalToAnyBase(n,b1,b2)<<endl;
    return 0;
}