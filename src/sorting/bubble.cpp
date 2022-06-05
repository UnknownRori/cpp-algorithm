#include <iostream>
#include <chrono>
#include "../../include/sorting.h"
#include "../../include/unknownrori.h"

/**
 * @brief A simple implementation on bubble sort alogrithm
 *
 * @param data
 */
void bubble_sort(int *data, int length, bool print)
{
    if (!print)
        print_array(data, length);

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (print)
                print_array(data, length);

            if (data[i] < data[j])
                swap(data, j, i);
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapse = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    if (!print)
        print_array(data, length);

    std::cout << "Bubble Sort time execution : "
              << elapse.count()
              << " ms"
              << "\n";
}