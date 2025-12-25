#include<iostream>
using namespace std;

int main(){
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
  
  
}