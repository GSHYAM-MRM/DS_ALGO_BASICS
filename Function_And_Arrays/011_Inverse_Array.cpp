#include<iostream>
using namespace std;

int* inverse(int* arr, int n) {
  // write your code here
  int *c = new int[n];
  for (int i = 0; i < n; i++)
  {
      c[arr[i]] = i;
  }
  return c;
}

void display(int* arr, int n) {
  for (int i = 0 ; i < n; i++) {
    cout << arr[i] << endl;
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  int* arr = new int[n];
  for (int i = 0 ; i < n; i++) {
    cin >> arr[i];
  }

  int* inv = inverse(arr, n);
  display(inv, n);

}