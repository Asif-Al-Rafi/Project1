#include <iostream>
#include "SelectionSortUsArray.h"
#include "InsertionSortUsArray.h"
#include "MergeSortUsArray.h"
#include "BubbleSortUsArray.h"


using namespace std;

int main()
{

    SelectionSort asif;

    int arr[] = {10,33,27,14,35,19,48,44};
    int size = 8;

    asif.SelectionSorter(arr,size);

    InsertionSort rafi;

    int arr0[] = {10,33,27,14,35,19,48,44};

    rafi.InsertionSorter(arr0,size);

    MergeSort rauf;

    int arr1[]  = {10,33,27,14,35,19,48,44};

    std::cout<<"\nPrint Merge sort : "<<std::endl;
    rauf.MergeSorter(arr1,size);

    BubbleSort asik;

    int arr2[]  = {10,33,27,14,35,19,48,44};

    std::cout<<"\nPrint Bubble sort : "<<std::endl;

    asik.BubbleSorter(arr2,size);
    return 0;
}
