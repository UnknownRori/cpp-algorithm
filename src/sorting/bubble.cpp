#include "../../include/sorting.h"
#include "../../include/unknownrori.h"

/**
 * @brief A simple implementation on bubble sort alogrithm
 *
 * @param data
 */
void bubble_sort(int *data, int length)
{
    bubble_sort(data, 0, length);
}

/**
 * @brief Bubble sort for specific block inside an array
 *
 * @param data
 * @param start
 * @param end
 */
void bubble_sort(int *data, int start, int end)
{
    /**
     * Iterate all of the value inside array thoroughly
     * and swap the value if first index is smaller than the next index
     */

    for (start; start < end; start++)
    {
        for (int j = 0; j < end; j++)
        {
            if (data[start] < data[j])
                swap(data, j, start);
        }
    }
}