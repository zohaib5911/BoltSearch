#include "Record.hpp"

Record::Record() : id(""), name(""), email(""), phone(""), address("") {}
Record::Record(string id, string name, string email, string phone, string address) 
    : id(std::move(id)), name(std::move(name)), email(std::move(email)), 
      phone(std::move(phone)), address(std::move(address)) {}
Record::Record(const Record& other) 
    : id(other.id), name(other.name), email(other.email),
     phone(other.phone), address(other.address) {}

Record& Record::operator=(const Record& other) {
    if (this != &other) {
        id = other.id;
        name = other.name;
        email = other.email;
        phone = other.phone;
        address = other.address;
    }
    return *this;
}

Record::~Record() {}

ostream& operator<<(ostream& os, const Record& record) {
    os << "ID: " << record.id << "\n"
       << "Name: " << record.name << "\n"
       << "Email: " << record.email << "\n"
       << "Phone: " << record.phone << "\n"
       << "Address: " << record.address << "\n";
    return os;
}
