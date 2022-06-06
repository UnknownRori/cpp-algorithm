#include "../../include/sorting.h"
#include "../../include/unknownrori.h"

/**
 * @brief Simple implementation on insertion sort algorithm
 *
 * @param data
 * @param length
 */
void insertion_sort(int *data, int length)
{
    insertion_sort(data, 0, length);
}
/**
 * @brief Insertion sort for specific block inside an array
 *
 * @param data
 * @param start
 * @param end
 */
void insertion_sort(int *data, int start, int end)
{
    /**
     * Iterate the array if encounter a value that bigger than the previous value
     * swap the value over and over while decrement the current index
     * until it's not bigger than previous value
     */

    for (start; start < end; start++)
    {
        int j = start;
        while (j > 0 && data[j - 1] > data[j])
        {
            swap(data, j, j - 1);
            j--;
        }
    }
}
