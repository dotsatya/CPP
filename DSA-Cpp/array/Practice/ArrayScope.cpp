#include<iostream>
using namespace std;

int  sumOfArray(int arr[], int size) {
  int sum = 0;
   for(int i = 0; i < size; i++) {
    // cout << arr[i] << " ";
    sum+=arr[i];  
  }
// return sum; 
cout << sum; 
}

// void updateArr(int arr[], int size) {
// cout << "Inside the function" << endl; // inside the function

// arr[0] = 10;

//   for(int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// cout << "Back to main function" << endl; //  back to main function
// }

int main() {
  // int size1;
  // cin >> size1;
  // int arr1[size1];
  // for(int i = 0; i < size1; i++) {
  //   cin >> arr1[i];
  // }
  
  int arr1[] = {1, 2, 3, 4, 5};
  int size1 = 5;
sumOfArray(arr1, size1);
  // updateArr(arr1, size1);

  // cout << "In to main function" << endl;  
  //   for(int i = 0; i < size1; i++) {
  //   cout << arr1[i] << " ";
  // }
  cout << endl;

  return 0;
}