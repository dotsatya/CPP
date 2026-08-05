#include <bits/stdc++.h>
using namespace std;

// Function declaration
int partition(int arr[], int s, int e);

// Quick Sort Function
void quickSort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
        return;

    // Find the correct position of pivot
    int p = partition(arr, s, e);

    // Sort left part
    quickSort(arr, s, p - 1);

    // Sort right part
    quickSort(arr, p + 1, e);
}

// Partition Function
int partition(int arr[], int s, int e)
{
    // Choose first element as pivot
    int pivot = arr[s];

    // Count elements smaller than or equal to pivot
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            cnt++;
    }

    // Place pivot at its correct position
    int pivotIdx = s + cnt;
    swap(arr[pivotIdx], arr[s]);

    // Left pointer
    int i = s;

    // Right pointer
    int j = e;

    // Arrange elements around pivot
    while (i < pivotIdx && j > pivotIdx)
    {
        // Find element greater than pivot from left
        while (i < pivotIdx && arr[i] <= pivot)
            i++;

        // Find element smaller than or equal to pivot from right
        while (j > pivotIdx && arr[j] > pivot)
            j--;

        // Swap if both pointers are valid
        if (i < pivotIdx && j > pivotIdx)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // Return pivot index
    return pivotIdx;
}

int main()
{
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}