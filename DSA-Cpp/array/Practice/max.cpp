#include<iostream>
#include <climits>
using namespace std;

void maxMin(int arr[], int size) {
  int minVal = INT_MAX;
  int maxVal = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
  }
cout <<"Max value is "  << maxVal << endl;
cout << "Min value is " << minVal << endl;

}

int main() {
  int size1;
  cin >> size1;
  int arr1[size1];
  for(int i = 0; i < size1; i++) {
  // for(auto &i : arr1) {
    cin >> arr1[i];
  }
  // cout << maxMin(arr1, size1) << endl;
  
  maxMin(arr1, size1);

  return 0;
}