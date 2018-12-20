#include "InsertionSortUseVector.h"
#include <iostream>

InsertionSort::InsertionSort()
{

}

InsertionSort::~InsertionSort()
{

}

void InsertionSort::InsertionSorter(vector<int> arr, int arr_size)
{
    std::cout<<"\nPrint insertion sort : "<<std::endl;
    if(arr_size > 1)
    {
        int size = arr_size;
        for(int i = 1; i < size; ++i)
        {
            int j = i - 1;
            int key = arr[i];
            while(j >= 0 && arr[j] > key)
            {
                arr[j+1] = arr[j];
                --j;
            }
            arr[j+1] = key;
            for(int index =0;index<arr_size ;index++)
            {
                std::cout<<arr[index]<<" ";
            }
            std::cout<<std::endl;
        }

    }
}
