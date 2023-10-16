#ifndef CSVREADER_H
#define CSVREADER_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;


class CSVReader{
    public:
        enum class DataType { INT, FLOAT };
        CSVReader(const string &filename,  const char delim = ',');
        
        template<typename T>
        vector<vector<T>> readCSV(DataType dataType = DataType::INT);

    private:
        string filename;
        char delim;
        DataType dataType;
};
#endif
