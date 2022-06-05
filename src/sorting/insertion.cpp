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
    for (int i = 0; i < length; i++)
    {
        int j = i;
        while (j > 0 && data[j - 1] > data[j])
        {
            swap(data, j, j - 1);
            j--;
        }
    }
}