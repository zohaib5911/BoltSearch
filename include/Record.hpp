#ifndef RECORD_HPP
#define RECORD_HPP

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Record {
    string id;
    string name;
    string email;
    string phone;
    string address;
public:
    Record();
    Record(const Record& other);
    Record& operator=(const Record& other);
    Record(string id,string name,string email,string phone,string address);
    ~Record();
    friend ostream& operator<<(ostream& os, const Record& record);
};

#endif
