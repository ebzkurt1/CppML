#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "CSVReader.h"

using namespace std;


int main(){
    CSVReader reader("Iris.csv", ',');
    vector<vector<float>> data = reader.readCSV<float>();
    cout << "Data:" << endl;
    for(const auto &row : data){
        for(const auto &cell : row){
            cout << cell << " ";
        }
        cout << endl;
    }
    
    return 0;
}
