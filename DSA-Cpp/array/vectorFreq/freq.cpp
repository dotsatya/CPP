#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 1, 3, 2, 2, 3};

    vector<int> freq(5, 0);

//    before add the freq of each element and print just the freq of each element (0 to n)
    for (int i : freq) {
        cout << i << " ";
    }
    cout << endl;
    
    for (int x : arr) {
        freq[x]++;
    }

    cout << endl;

//    after add the freq of each element and print just the freq of each element (0 to n)
    for (int i : freq) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        if (freq[i] > 0) {
            cout << i << " -> " << freq[i] << endl;
        }
    }
}