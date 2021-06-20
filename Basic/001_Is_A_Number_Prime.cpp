#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
  long int t;
  cin >> t;

  //write your code here
  long long int n, flag, count;

  for(int j=0; j<t; j++)
  {
    flag = 0;
    cin>>n;
    for (int i = 2; i<n; i++)
    {
        if(n % i == 0)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==0)
        cout<<"prime"<<endl;
    else
        cout<<"not prime"<<endl;
  }
  return 0;
}