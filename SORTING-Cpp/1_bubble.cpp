#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {7, 6, 2, 10, 3};
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        // cout << "\n"
            //  << "i" << arr[i] << "\n";

        for (int j = 0; j < n - i; j++)
        {
            // cout << "j" << arr[j] << " ";
            
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    // cout << "\n";

    for (int num : arr)
        cout << num << ' ';
}