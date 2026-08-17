#include <bits/stdc++.h>
using namespace std;

void get(int arr[], int n) {
    cout << " inside the function"<< sizeof(arr) << endl;
    cout <<" inside the function"<< arr << endl;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << sizeof(arr) << endl;
    cout << arr << endl;

    get(arr, 5);

    return 0;
}