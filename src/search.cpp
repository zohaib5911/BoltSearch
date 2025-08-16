// src/Search.cpp
#include "Search.hpp"
#include <iostream>
using namespace std;


Search::Search() {
    cout << "Search object created!\n";
}

vector<int> Search::findPattern(const string& text, const string& pattern) {
    vector<int> result;
    int n = text.size();
    int m = pattern.size();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m) { // found full match
            result.push_back(i);
        }
    }
    return result;
}









