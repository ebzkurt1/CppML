#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "CSVReader.h"


using namespace std;


CSVReader::CSVReader(const string &filename, const char delim)
    : filename(filename), delim(delim) { }


template<typename T>
vector<vector<T>> CSVReader::readCSV(DataType dataType){
    vector<vector<T>> data;
    ifstream file(filename);
    string line;

    while(getline(file, line)){
        vector<T> row;
        stringstream ss(line);
        string token;

        while(getline(ss, token, delim)){
            try{
                T value = static_cast<T>(stod(token));
                row.push_back(value);
            }catch(const invalid_argument &e){
                cout << "Error converting input value to specific type: " << e.what() << endl;
            }
        }
        data.push_back(row);
    }
    file.close();

    return data;
}


template vector<vector<int>> CSVReader::readCSV<int>(DataType dataType);
template vector<vector<float>> CSVReader::readCSV<float>(DataType dataType);
