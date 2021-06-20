#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;
    int flag;

    for(int i=low; i<=high; i++)
    {
        flag = 0;
        for(int j=2; j<=sqrt(i); j++)
        {
            if(i % j == 0)
            {
                flag=1;
                break;
            }
        }
        
        if(flag == 0)
            cout<<i<<endl;
    }

}