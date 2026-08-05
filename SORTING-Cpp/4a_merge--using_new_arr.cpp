#include <bits/stdc++.h>
using namespace std;

// Merge two sorted subarrays
void merge(int arr[], int s, int e)
{
    // Find middle index
    int mid = s + (e - s) / 2;

    // Length of left and right subarrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy left part into first[]
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
        first[i] = arr[mainArrayIndex++];

    // Copy right part into second[]
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
        second[i] = arr[mainArrayIndex++];

    // Merge the two temporary arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
            arr[mainArrayIndex++] = first[index1++];
        else
            arr[mainArrayIndex++] = second[index2++];
    }

    // Copy remaining elements of first[]
    while (index1 < len1)
        arr[mainArrayIndex++] = first[index1++];

    // Copy remaining elements of second[]
    while (index2 < len2)
        arr[mainArrayIndex++] = second[index2++];

    // Free dynamically allocated memory
    delete[] first;
    delete[] second;
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