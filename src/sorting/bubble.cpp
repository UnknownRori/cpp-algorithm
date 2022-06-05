#include "../../include/sorting.h"
#include "../../include/unknownrori.h"

/**
 * @brief A simple implementation on bubble sort alogrithm
 *
 * @param data
 */
void bubble_sort(int *data, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (data[i] < data[j])
                swap(data, j, i);
        }
    }
}