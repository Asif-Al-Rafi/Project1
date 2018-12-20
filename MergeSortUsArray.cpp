#include "MergeSortUsArray.h"
#include <iostream>

MergeSort::MergeSort()
{

}

MergeSort::~MergeSort()
{

}

void Merger(int arr[], int lo, int  mi, int hi)
{

    int *temp = new int[hi-lo+1];
    int i = lo,
    j = mi + 1;
    int k = 0;
    while(i <= mi && j <=hi)
    {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
        }
        while(i <= mi)
            temp[k++] = arr[i++];
        while(j <= hi)
            temp[k++] = arr[j++];

        for(k = 0, i = lo; i <= hi; ++i, ++k)
            arr[i] = temp[k];

        for(int counter = 0; counter < 8; counter++)
        {
            std::cout<<arr[counter]<<" ";
        }
            std::cout<<std::endl;

            delete []temp;
}

void MergeSortHelper(int arr[], int lo, int hi)
{
    int mid;
    if(lo < hi)
    {
        mid = (lo + hi)  / 2;
        MergeSortHelper(arr, lo, mid);
        MergeSortHelper(arr, mid+1, hi);
        Merger(arr, lo, mid, hi);
    }
}

void MergeSort::MergeSorter(int arr[], int arr_size)
{
    MergeSortHelper(arr, 0, arr_size-1);

}

