#include<iostream>
#include<cmath>

using namespace std;

int dig_freq(int n,int d)
{
    int dig, count;
    while(n>0)
    {
        dig = n % 10;
        if(dig == d)
            count++;
        n /= 10;
    }
    return count;
}

int main()
{
    int n, d, count;
    cin>>n>>d;
    count = dig_freq(n,d);
    cout<<count<<endl;
    return 0;
}