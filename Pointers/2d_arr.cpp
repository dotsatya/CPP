#include <iostream>
using namespace std;

// Function to print a 2D array
int main() {
  int row;
  cout<<"Enter the number of rows";
  cin>>row;

  int col;
  cout<<"Enter the number of columns";
  cin>>col;

  int **arr = new int *[row];
  for (int i = 0; i < row; i++) {
    arr[i] = new int[col];
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < row; i++) {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;


  // int n;
  // cin >> n;
  // int **arr = new int *[n];
  // for (int i = 0; i < n; i++) {
  //   arr[i] = new int[n];
  // }

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     cin >> arr[i][j];
  //   }
  // }
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // for (int i = 0; i < n; i++) {
  //   delete[] arr[i];
  // }
  // delete[] arr;

  return 0;
}