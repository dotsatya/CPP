#include <iostream>
using namespace std;

template <typename T>
void printArr(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}      

// void printArr(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";  
//     }
//     cout << endl;
// }

// void printArr(char arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";  
//     }
//     cout << endl;
// }

int main() {
    // int arr1[10] = {1, 2, 3, 4, 5}; 
    // int size1 = 10;
    // printArr(arr1, size1);

    // char arr2[] = {'a', 'b', 'c', 'd'}; 
    // int size2 = 4;
    // printArr(arr2, size2);
    




    int size;
    cin >> size;
    char arr[size];
    // for (int i= 0; i < size; i++) {
    //     cin >> arr[i];
    // }
    for(auto &i : arr) {
        cin >> i;
    }
    printArr(arr, size);



    return 0;
}
