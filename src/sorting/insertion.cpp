#include <iostream>
#include <chrono>
#include "../../include/sorting.h"
#include "../../include/unknownrori.h"

/**
 * @brief Simple implementation on insertion sort algorithm
 *
 * @param data
 * @param length
 */
void insertion_sort(int *data, int length, bool print)
{
    if (!print)
        print_array(data, length);

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < length; i++)
    {
        int j = i;
        while (j > 0 && data[j - 1] > data[j])
        {
            swap(data, j, j - 1);
            j--;
            if (print)
                print_array(data, length);
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapse = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    if (!print)
        print_array(data, length);

    std::cout << "Insertion Sort time execution : "
              << elapse.count()
              << " ms"
              << "\n";
}