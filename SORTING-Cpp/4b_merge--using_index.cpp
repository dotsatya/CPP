#include <bits/stdc++.h>
using namespace std;


void merge(int *arr, int s, int e)
{
    
    int mid = s + (e - s) / 2;
    int s1 = s;
    int s2 = mid + 1;

    while (s1 <= mid && s2 <= e)
    {
        if (arr[s1] <= arr[s2])
        {
            s1++;
        }
        else
        {
            int value = arr[s2];
            int idx = s2;

            while (idx > s1)
            {
                arr[idx] = arr[idx - 1];
                idx--;
            }

            arr[s1] = value;

            s1++;
            mid++;
            s2++;
        }
    }
}
// Recursive Merge Sort function
void mergeSort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
        return;

    // Find middle index
    int mid = s + (e - s) / 2;

    // Sort left half
    mergeSort(arr, s, mid);

    // Sort right half
    mergeSort(arr, mid + 1, e);

    // Merge both sorted halves
    merge(arr, s, e);
}

int main()
{
    int arr[] = {6, 2, 10, 1, 3, 4, 8, 5};

    // number of elements
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}