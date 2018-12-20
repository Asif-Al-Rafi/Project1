#ifndef INSERTIONSORTUSEVECTOR_H_INCLUDED
#define INSERTIONSORTUSEVECTOR_H_INCLUDED
#include <iostream>
#include <vector>

using namespace std;

class InsertionSort
{

    public:
        InsertionSort();
        ~InsertionSort();
        void InsertionSorter(vector<int> arr, int arr_size);
};

#endif // INSERTIONSORTUSEVECTOR_H_INCLUDED
