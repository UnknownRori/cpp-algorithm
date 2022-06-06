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

/**
 * @brief Bubble sort for specific block inside an array
 *
 * @param data
 * @param start
 * @param end
 */
void bubble_sort(int *data, int start, int end)
{
    for (start; start < end; start++)
    {
        for (int j = 0; j < end; j++)
        {
            if (data[start] < data[j])
                swap(data, j, start);
        }
    }
}