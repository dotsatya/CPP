#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {6, 2, 10, 1, 3, 4, 8, 5};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[minIdx], arr[i]);
    }

    for (int num : arr)
        cout << num << ' ';
}