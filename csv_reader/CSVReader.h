#ifndef CSVREADER_H
#define CSVREADER_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;


class CSVReader{
    public:
        CSVReader(const string &filename, const string dataType = "int",  const char delim = ',');
        vector<vector<int>> readCSV();

    private:
        string filename;
        string dataType;
        char delim;
};
#endif
