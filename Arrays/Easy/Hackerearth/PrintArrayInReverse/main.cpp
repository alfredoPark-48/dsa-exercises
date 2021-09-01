#include <iostream>
using namespace std;

int main() {
  int n = 0;
  cin >> n;
  int arr[n];

  for (int i=0; i<n; i++) {
    int num;
    cin >> num;
    arr[i] = num;
  }

  for (int i=n-1; i>=0; i--) {
    cout << arr[i] << endl;
  }

  return 0;
}