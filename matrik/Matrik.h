#ifndef MATRIK_H
#define MATRIK_H
#include <iostream>
#include <vector>


using namespace std;


/**
 * Class for handling 2-dimensional matrix
 */
template <class T>
class Matrik{
    public:
        Matrik();
    private:
        vector<vector<T>> matrik;
        int rowNumber;
        int columnNumber;


#endif // !MATRIK_H
