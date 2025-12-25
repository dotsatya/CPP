#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<int> v;

    string clean = "";

    // Keep only digits, commas, minus sign
    for(char c : s) {
        if (isdigit(c) || c == ',' || c == '-') {
            clean += c;
        }
    }

    stringstream ss(clean);


    // // Correct bracket removal
    
    // if ((s.front() == '[' || s.front() == '(') && (s.back() == ']' || s.back() == ')')) {
    //     s.erase(s.begin());
    //     s.pop_back();
    // } 
    // else if (s.front() == '[' || s.front() == '(') {
    //     s.erase(s.begin());
    // } 
    // else if (s.back() == ']' || s.back() == ')') {
    //     s.pop_back();
    // }
    
    // stringstream ss(s);


    string temp;

    while (getline(ss, temp, ','))
    {
        int num = stoi(temp);
        v.push_back(num);
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}