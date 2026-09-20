#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, map<int, int>> mp;

    int n;
    cin >> n;

    // Input
    for (int i = 0; i < n; i++) {
        int outerKey, innerKey, value;

        cin >> outerKey >> innerKey >> value;

        mp[outerKey][innerKey] = value;
    }

    // Output
    cout << "Map contents:\n";

    for (auto &outer : mp) {
        cout << "Outer Key: " << outer.first << "\n";

        for (auto &inner : outer.second) {
            cout << "  Inner Key: " << inner.first
                 << " -> Value: " << inner.second << "\n";
        }
    }

    return 0;
}