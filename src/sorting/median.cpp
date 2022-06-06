#include <iostream>
#include "../../include/sorting.h"
#include "../../include/unknownrori.h"

/**
 * @brief Just a overloaded function to call other function
 *
 * @param data
 * @param length
 */
void median_sort(int *data, int length)
{
    median_sort(data, 0, length);
}

/**
 * @brief A simple implementation on median sort alogrithm
 *
 * @param data
 */
void median_sort(int *data, int start, int end)
{
    /**
     * First check if length of array is odd or not
     * store the result inside variable
     *
     * if the result is odd add 1 number and start spliting the array into smaller array
     * spliting until only 3 value inside array and then do some insertion sort
     *
     * if the result is even... do array spliting but with uneven array on each side.
     *
     * 1 2 3 4 5 6 7 8 9 10
     *         ^ Median not incremented because even number
     * 1 2 3 4 5 6 7 8 9
     *       ^-^ Median on the right after got incremented because odd number
     */
    int length = (end - start);
    if (length < 5)
    {
        return insertion_sort(data, start, end);
    }
    else
    {
        int median = length / 2;

        if (length % 2)
            median++;

        int pivotLeft = (median - 1);
        int pivotRight = median;

        int *pivotLeftPointer[pivotLeft];
        *pivotLeftPointer = &data[0];

        int *pivotRightPointer[end];
        *pivotRightPointer = &data[pivotRight];

        median_sort(*pivotLeftPointer, size(pivotLeftPointer));
        median_sort(*pivotRightPointer, size(pivotLeftPointer));
        insertion_sort(data, length);
    }
}