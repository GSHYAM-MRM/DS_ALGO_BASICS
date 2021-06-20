#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int n1 = n;
    
    int count = 0;

    while(n > 0)
    {
        n /= 10;
        count++;
    }
    
    if(abs(k) > count)
    {
        k %= count;
    }
    
    if(k < 0)
    {
        k = k + count;
    }
    
    
    int mulpow = count - k;
    int power = pow(10, k);
    int rem = n1 % power;
    int first = rem * pow(10, mulpow);

    int second = n1 / power;
    int result = first + second;
    
    cout<<result<<endl;
    return 0;
}