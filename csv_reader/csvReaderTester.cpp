#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "CSVReader.h"

using namespace std;


int main(){
    CSVReader reader("../sampleData/Iris.csv");
    vector<vector<int>> data = reader.readCSV();
    cout << "Data:" << endl;
    for(const auto &row : data){
        for(const auto &cell : row){
            cout << cell << " ";
        }
        cout << endl;
    }
    
    return 0;
}
