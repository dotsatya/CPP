#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {7, 6, 2, 10, 3};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        cout << "\n"
         << "i" << arr[i] << "\n";
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            cout << "j" << arr[j] << " ";
            cout << "minIDX" << arr[minIdx] ;
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[minIdx], arr[i]);
    }

    cout << "\n";

    for (int num : arr)
        cout << num << ' ';
}