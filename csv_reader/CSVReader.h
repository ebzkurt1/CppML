#ifndef CSVREADER_H
#define CSVREADER_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;


class CSVReader{
    public:
        CSVReader(const string &filename, const char delim = ',');
        vector<vector<string>> readCSV();

    private:
        string filename;
        char delim;
};
#endif
