#ifndef SELECTIONSORTUSEVECTOR_H_INCLUDED
#define SELECTIONSORTUSEVECTOR_H_INCLUDED
#include <iostream>
#include <vector>

using namespace std;

class SelectionSort
{
    public:
        SelectionSort();
        ~SelectionSort();
        void SelectionSorter(vector<int> arr, int arr_size);
};


#endif // SELECTIONSORTUSEVECTOR_H_INCLUDED
