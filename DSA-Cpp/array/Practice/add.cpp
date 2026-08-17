#include <iostream>
using namespace std;

int main() {
  int size1;
  cin >> size1;
  int arr1[size1];
  for(int i = 0; i < size1; i++) {
    cin >> arr1[i];
  }
  int sum = 0;
  for(int i = 0; i < size1; i++) {
    sum += arr1[i];
  }
  cout << sum << endl;
  return 0;
}

