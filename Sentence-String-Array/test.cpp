#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> line;

    string a;
    getline(cin, a);

    stringstream ss(a);

    string word;
    while (ss >> word) {
        line.push_back(word);
    }

    sort(line.begin(), line.end());

    for (string x : line) {
        cout << x << " ";
    }

    return 0;
}