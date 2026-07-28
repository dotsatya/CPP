#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string line;
    getline(cin, line);   // read full line

    stringstream ss(line);
    vector<int> arr;
    int x;

    while (ss >> x) {     // extract numbers
        arr.push_back(x);
    }

    // check
    for (int i : arr) {
        cout << i << " ";
    }
}