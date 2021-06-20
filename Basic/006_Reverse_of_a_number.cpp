#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code herei
    int reverse = 0, reminder;
    
    while(n > 0)
    {
        reminder = n % 10;
        
        cout<<reminder<<endl;
        
        n /= 10;
    }
    
}