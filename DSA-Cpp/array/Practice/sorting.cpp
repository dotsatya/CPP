#include<iostream>
#include<vector>
using namespace std;

void sortedArray(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << " ";
  }
}

void sorting(vector<int> &arr){
  for(int i = 0; i < arr.size(); i++){
    for(int j = i+1; j < arr.size(); j++){
      if(arr[i] > arr[j]){
        swap(arr[i], arr[j]);
      }
    }
  }
sortedArray(arr);
}

int main(){
//  int size = 14;
//  int arr[14] = {1,2,1,1,0,0,0,1,1,1,1,2,2,2};
//  sorting(arr, size);
vector<int> arr = {1,2,1,1,0,0,0,1,1,1,1,2,2,2};
 sorting(arr);
}