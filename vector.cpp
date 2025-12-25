#include <vector>
#include <iostream>
using namespace std; 


int main() {
  // define vector
  vector<int> v;

  v.push_back(1);
  v.push_back(2);
  v.push_back(4);
  v.push_back(3);

  // after push back print vector
  for (int el: v) cout << el << " "; cout << endl;
  cout << "vector size: " << v.size() << endl; 
  
  v.pop_back();
  // after pop back print vector
  for (int el: v) cout << el << " "; cout << endl;
  cout << "vector size: " << v.size() << endl; 
  
  return 0;
}

