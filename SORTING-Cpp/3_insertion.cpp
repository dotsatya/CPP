#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {6, 2, 10, 1, 3, 4, 8, 5};
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    for (int num : arr)
        cout << num << ' ';
}