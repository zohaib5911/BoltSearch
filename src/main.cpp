#include <iostream>
#include "Search.hpp"
#include "Record.hpp"

#include "LoadCsv.hpp"

using namespace std;

int main() {
   string fileName = "/home/zohaib/Desktop/BoltSearch/data/record.csv";

   vector<Record> records = load(fileName);

   cout<<"\nPrint   All Records \n";
   for (const auto& record : records) {
       cout << record << endl;
   }

    return 0;
}
