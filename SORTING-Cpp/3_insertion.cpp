#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {6, 2, 10, 1, 3, 4, 8, 5};
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j]; // Shift element
            j--;
        }
        arr[j + 1] = temp;
    }

    for (int num : arr)
        cout << num << ' ';
}