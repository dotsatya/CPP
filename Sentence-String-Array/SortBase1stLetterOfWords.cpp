#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);

    vector<string> words;
    string word ;

    while (ss >> word){
        // capital letter sort first, then small -- so convert into lowercase
        for (int i = 0 ; i < word.length() ; i++){
            word[i] = tolower(word[i]);
        }
        words.push_back(word);
    }

    sort(words.begin(), words.end());

    for (string w : words){
        cout << w[0] << " ";
    }

    // word.toLowerCase() in js
    return 0;
}