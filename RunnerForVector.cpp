#include <iostream>
#include <vector>
#include "BubblesortUseVector.h"
#include "InsertionSortUseVector.h"
#include "MergeSortUseVector.h"
#include "SelectionSortUseVector.h"

using namespace std;

int main()
{
    BubbleSort asik;

    vector<int> arr2;

    arr2.push_back(14);
    arr2.push_back(33);
    arr2.push_back(27);
    arr2.push_back(10);
    arr2.push_back(35);
    arr2.push_back(19);
    arr2.push_back(48);
    arr2.push_back(44);

    int size2 = arr2.size();

    std::cout<<"\nPrint Bubble sort : "<<std::endl;

    asik.BubbleSorter(arr2,size2);


    InsertionSort asif;

    vector<int> arr;

    arr.push_back(14);
    arr.push_back(33);
    arr.push_back(27);
    arr.push_back(10);
    arr.push_back(35);
    arr.push_back(19);
    arr.push_back(48);
    arr.push_back(44);

    int size = arr.size();

    asif.InsertionSorter(arr,size);


    MergeSort rafi;

    vector<int> arr0;

    arr0.push_back(14);
    arr0.push_back(33);
    arr0.push_back(27);
    arr0.push_back(10);
    arr0.push_back(35);
    arr0.push_back(19);
    arr0.push_back(48);
    arr0.push_back(44);

    int size0 = arr0.size();

    std::cout<<"\nPrint Merge sort : "<<std::endl;
    rafi.MergeSorter(arr0,size0);


    SelectionSort rauf;

    vector<int> arr1;

    arr1.push_back(14);
    arr1.push_back(33);
    arr1.push_back(27);
    arr1.push_back(10);
    arr1.push_back(35);
    arr1.push_back(19);
    arr1.push_back(48);
    arr1.push_back(44);

    int size1 = arr1.size();

    rauf.SelectionSorter(arr1,size1);


    return 0;
}
