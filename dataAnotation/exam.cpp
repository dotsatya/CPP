#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <regex>
#include <algorithm>
#include <curl/curl.h>

using namespace std;

// This function receives the downloaded HTML data
// and stores it inside a string.
size_t writeCallback(void* data, size_t size, size_t count, void* userData) {
    string* html = (string*)userData;

    html->append((char*)data, size * count);

    return size * count;
}

// Download the Doc
string getHTML(string url) {

    CURL* curl = curl_easy_init();
    string html;

    if (curl) {

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &html);

        curl_easy_perform(curl);

        curl_easy_cleanup(curl);
    }

    return html;
}

void decodeSecretMessage(string url) {

    // Get Google Doc HTML
    string html = getHTML(url);

    // Find all table cells
    regex cellRegex("<td[^>]*>([\\s\\S]*?)</td>");

    vector<string> cells;

    auto start = sregex_iterator(
        html.begin(),
        html.end(),
        cellRegex
    );

    auto finish = sregex_iterator();

    // Store every table cell
    for (auto it = start; it != finish; ++it) {

        string cell = (*it)[1].str();

        // Remove HTML tags inside the cell
        cell = regex_replace(
            cell,
            regex("<[^>]*>"),
            ""
        );

        cells.push_back(cell);
    }

    /*
        Each row contains:

        x-coordinate
        character
        y-coordinate

        The first 3 cells are the headers,
        so we skip them.
    */

    map<pair<int, int>, string> grid;

    int maxX = 0;
    int maxY = 0;

    for (int i = 3; i + 2 < cells.size(); i += 3) {

        int x = stoi(cells[i]);
        string character = cells[i + 1];
        int y = stoi(cells[i + 2]);

        // Store character at (x, y)
        grid[{x, y}] = character;

        maxX = max(maxX, x);
        maxY = max(maxY, y);
    }

    // Print the grid.
    // Y increases upward, so start from maxY.
    for (int y = maxY; y >= 0; y--) {

        for (int x = 0; x <= maxX; x++) {

            if (grid.count({x, y})) {
                cout << grid[{x, y}];
            }
            else {
                cout << " ";
            }
        }

        cout << '\n';
    }
}

int main() {

    string url =
        "https://docs.google.com/document/d/e/"
        "2PACX-1vSvM5gDlNvt7npYHhp_XfsJvuntUhq184By5xO_pA4b_gCWeXb6dM6ZxwN8rE6S4ghUsCj2VKR21oEP/pub";

    decodeSecretMessage(url);

    return 0;
}