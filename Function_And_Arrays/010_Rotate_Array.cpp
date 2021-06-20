#include<iostream>
using namespace std;

void rotate(int* arr, int n, int k){
   // write your code here
   if(k < 0)
    k = k + n;

   k = k % n;
   
   int temp = 0;
   int f = 0;
   int l = n-k-1;
   for(int i=0; i<(n-k)/2; i++)
   {
       temp = arr[f];
       arr[f] = arr[l];
       arr[l] = temp;
       f++;
       l--;
   }
   
   f=n-k;
   l=n-1;
   
   for(int i=0; i<k/2; i++)
   {
       temp = arr[f];
       arr[f] = arr[l];
       arr[l] = temp;
       f++;
       l--;
   }
   
   f=0;
   l=n-1;
   
    for(int i=0; i<n/2; i++)
   {
       temp = arr[f];
       arr[f] = arr[l];
       arr[l] = temp;
       f++;
       l--;
   }
   
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}
