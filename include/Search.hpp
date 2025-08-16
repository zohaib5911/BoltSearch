// include/Search.hpp
#ifndef SEARCH_HPP
#define SEARCH_HPP

#include <string>
#include <vector>

using namespace std;

class Search {
public:
    Search();
    vector<int> findPattern(const string& text, const string& pattern);
};

#endif
