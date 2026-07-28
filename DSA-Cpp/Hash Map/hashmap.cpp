#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;

    pair<string, int> p1 = make_pair("i", 1);
    m.insert(p1);
    
    pair<string, int> p2 ("i", 2);
    m.insert(p2);
    
    m["a"] = 1;
    m["good"] = 1;
    m["student"] = 1;
    m["with"] = 1;
    m["a"] = 2;
    m["good"] = 2;
    m["designer"] = 1;

    cout << m.size() << endl;

    cout << m.count("student") << endl;
    
    // m.erase("student");
    // cout << m.count("student") << endl;
    
    // m["unknown"] = 3;
    // cout << m.at("unknown") << endl;

    cout << m["unknown"] << endl;
    
    cout << "unknown" << m.count("unknown") << endl;

    // m.clear();
    // cout << m.size() << endl;

   for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
}