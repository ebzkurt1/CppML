#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "CSVReader.h"


using namespace std;


template <typename T>
CSVReader<T>::CSVReader(const string &filename, const char delim)
    : filename(filename), delim(delim){ }

template <typename T>
vector<vector<T>> CSVReader<T>::readCSV(){
    vector<vector<T>> data;
    ifstream file(filename);
    string line;

    while(getline(file, line)){
        vector<T> row;
        istringstream lineStream(line);
        string cell;

        while(getline(ss, cell, delim)){
            istringstream cellStream(cell);
            T token;
            if(cellStream >> token){
                row.push_back(token);
            }
        }
        data.push_back(row);
    }
    file.close();

    return data;
}
