#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    // cout << arr[i] << " ";
    if (arr[i] == key)
    {
      cout <<"Key present in "<< i;
    } else{
      cout << "Key not present";
    }
    return i;
  }
}

int main()
{
  // int size1;
  // cin >> size1;
  // int arr1[size1];
  // for(int i = 0; i < size1; i++) {
  //   cin >> arr1[i];
  // }

  int arr1[] = {1, 2, 3, 4, 5};
  int size1 = 5;
  int key = 6;
  search(arr1, size1, key);

  cout << endl;

  return 0;
}