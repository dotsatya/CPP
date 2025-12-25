#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
  int start =0;
  int end = size-1;
  int mid = start + (end - start)/2;
  while(start <= end){
    if(arr[mid] == key){
      return mid;
    } else if(arr[mid] < key){
      start = mid + 1;
    } else {
      end = mid - 1;
    } 
    mid = start + (end - start)/2;
  }
  return -1;

}

int main(){
  int size = 5;
  int arr[5] = {1, 2, 3, 4, 5};
  int key = 8;
  if (binarySearch(arr, size, key) == -1){
    cout << "Key not found" << endl;
  } else {
    cout << "Key found at index " << binarySearch(arr, size, key) << endl;
  }


//   int size = 5;
//   int arr[5] = {1, 2, 3, 4, 5};
//   int key = 8;
// if (binarySearch(arr, size, key) == -1){
//   cout << "Key not found" << endl;
// } else {
//   cout << "Key found at index " << binarySearch(arr, size, key) << endl;
// }
//   return 0;
}