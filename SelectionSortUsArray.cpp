#include "SelectionSortUsArray.h"
#include <iostream>

SelectionSort::SelectionSort()
{

}

SelectionSort::~SelectionSort()
{

}

inline void Swap(int &a, int &b)
{
    int k = a;
    a = b;
    b = k;
}

void SelectionSort::SelectionSorter(int arr[], int arr_size)
 {
     std::cout<<"Print selection sort : "<<std::endl;
     for(int i = 0; i < arr_size - 1; ++i)
    {
        int min = i;
        for(int j = i+1; j < arr_size; ++j)
        {
            if(arr[j] < arr[min])
            min = j;
            Swap(arr[min], arr[i]);
        }
        for(int counter = 0; counter < arr_size; counter++)
        {
            std::cout<<arr[counter]<<" ";
        }
            std::cout<<std::endl;

    }
 }

