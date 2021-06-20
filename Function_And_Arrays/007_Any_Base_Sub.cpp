#include<iostream>
#include<cmath>
using namespace std;

int getDifference(int b, int n1, int n2){
    // write your code here
        int rem, val, ans = 0, i = 0;
    while(n1 > 0)
    {
       rem = n1 % 10;
       val = pow(b,i);
       ans += (rem*val);
       i++;
       n1 = n1 / 10;
    }
    n1 = ans;
    ans = 0;
    i = 0;
    while(n2 > 0)
    {
       rem = n2 % 10;
       val = pow(b,i);
       ans += (rem*val);
       i++;
       n2 = n2 / 10;
    }
    n2 = ans;
    
    int n = n2 - n1;
    i = 0;
    ans = 0;
    while(n > 0)
    {
       rem = n % b;
       val = pow(10,i);
       ans += (rem*val);
       i++;
       n = n / b;
    }
    return ans;
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getDifference(b,n1,n2)<<endl;
}