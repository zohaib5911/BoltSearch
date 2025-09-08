#ifndef LOADCSV_HPP
#define LOADCSV_HPP

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Record.hpp"

using namespace std;

vector<Record> load(const string& filename) {
    vector<Record> records;
    ifstream file(filename);
    string line;
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return records; 
    }
    while (getline(file, line)) {
        stringstream ss(line);
        string id, name, email, phone, address;

        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, email, ',');
        getline(ss, phone, ',');
        getline(ss, address, ',');

        records.emplace_back(id, name, email, phone, address);
    }

    return records;
}

#endif
