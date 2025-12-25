#include <iostream>
using namespace std;

int main() {
  int i = 5;
  int *ptr = &i;
  *ptr = 4;
  cout << "i =" << i << endl;
  cout << "*ptr = " << *ptr << endl;

  int **dptr = &ptr;
  cout << "*dptr  =" << *dptr << endl;
  cout << "**dptr = " << **dptr << endl;
  cout << "ptr = " << ptr << endl;
  cout << "dptr = " << dptr << endl;


  return 0; 
}