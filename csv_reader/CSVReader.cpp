#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "CSVReader.h"


using namespace std;


CSVReader::CSVReader(const string &filename, const string dataType, const char delim)
    : filename(filename), dataType(dataType), delim(delim){ }


vector<vector<int>> CSVReader::readCSV(){
    vector<vector<int>> data;
    ifstream file(filename);
    string line;

    while(getline(file, line)){
        vector<int> row;
        stringstream ss(line);
        string token;

        while(getline(ss, token, delim)){
            try{
                int value = stoi(token);
                row.push_back(value);
            }catch(const invalid_argument &e){
                cout << "Invalid input, not an integer: " << e.what() << endl;
            }
        }
        data.push_back(row);
    }
    file.close();

    return data;
}
