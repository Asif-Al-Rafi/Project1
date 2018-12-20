#include "BubbleSortUsArray.h"
#include <iostream>

BubbleSort::BubbleSort()
{

}

BubbleSort::~BubbleSort()
{

}
void swap(int &item1, int &item2)
{
    int temp = item1;
    item1 = item2;
    item2 = temp;
}
void BubbleSort:: BubbleSorter(int arr[], int size)
{
    int index1, index2;
    for(index1=1; index1<size; index1++)
    {
        for(index2=0; index2<(size-index1); index2++){
            if(arr[index2]>arr[index2+1])
            {
                swap(arr[index2],arr[index2+1]);
                for(int counter = 0; counter < 8; counter++)
        {
            std::cout<<arr[counter]<<" ";
        }
            std::cout<<std::endl;
            }

        }
    }

}

