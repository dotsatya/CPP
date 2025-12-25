#include <iostream>
#include <vector>
#include "numberSetBit.h"
using namespace std;

int main()
{
  // int n, m;
  // cin >> n >> m;
  // cout << numberSetBit(n)  + numberSetBit(m)<< endl;
  int var = 0;

  vector<int> nums = {1, 2, 4, 5, 3, 6, 7, 8, 9};
  for (int i = 0; i < nums.size(); i++)
  {
    cout << numberSetBit(nums[i]) << endl;
    var += numberSetBit(nums[i]);
  }
  cout << var << endl;
  // return 0;
}

/*

1 & 567 == 1
2 & 3456 == 2
4 & 789 == 4




2 & 2 == 2

3 & 1 == 1
3 & 2 == 2

[1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 80192, 160]

x = 1 << 1 = 2
x = 1 << 2 = 4
x = 1 << 3 = 8
x = 1 << 4 = 16
x = 1 << 5 = 32

for ( int i = 1; i <= 31; i++) {
  int x = 1 << i;
  cout << x << endl;
}

*/