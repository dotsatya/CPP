#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    vector<string> words;
    while (ss >> word) words.push_back(word);
    sort(words.begin(), words.end());
    for (string word : words) cout << word << endl;
}