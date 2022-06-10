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

    int length = (end - start); // count the total length of the array

    if (length < 30) // if below 30 then do some insertion sort and stop
        return insertion_sort(data, start, end);
    else
    {
        int median = length / 2; // get the median value

        if (length % 2) // if odd number increment by one
            median++;

        int pivotLeft = (median - 1); // get the left pivot
        int pivotRight = median;      // get the right pivot

        int *pivotLeftPointer[pivotLeft]; // initialize the left pivot pointer
        *pivotLeftPointer = &data[0];     // put left slice of the referenced data into the pointer

        int *pivotRightPointer[end];            // initialize the right pivot pointer
        *pivotRightPointer = &data[pivotRight]; // put right slice of referenced data into the pointer

        median_sort(*pivotLeftPointer, size(pivotLeftPointer));  // do some recursive
        median_sort(*pivotRightPointer, size(pivotLeftPointer)); // do some recursive
        insertion_sort(data, length);                            // finally do some finishing sort
    }
}