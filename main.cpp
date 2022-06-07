#include <iostream>
#include <chrono>
#include "./include/unknownrori.h"
#include "./include/sorting.h"

int main()
{
    /*----------------*\
    |    Dummy Data    |
    /*----------------*/

    // int data[] = {0, 4, 3, 2, 1, 5, 6};
    // int data[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11, 13, 14, 12, 15};
    // int data[] = {1, 2, 3, 6, 5, 4, 8, 7, 9, 10};
    // int data[] = {4, 5, 6, 1, 2, 3, 8, 7, 9, 10, 11, 14, 12, 15, 16, 13, 17, 20, 18, 19, 21, 25, 24, 22, 23, 26, 29, 27, 28, 31, 30, 33, 32, 35, 34, 37, 38, 39, 36, 40, 44, 43, 41, 42, 49, 48, 47, 45, 46, 50, 55, 54, 53, 52, 51, 60, 56, 58, 57, 59, 0};
    int data[200];
    for (int i = 0; i < size(data); i++)
    {
        data[i] = (size(data)) - i;
    }

    print_array(data, size(data));

    /* Starting the counter */
    auto start = std::chrono::high_resolution_clock::now();

    /*---------------*\
    |Sorting Algorithm|
    /*---------------*/

    // bubble_sort(data, size(data));
    // insertion_sort(data, size(data));
    median_sort(data, size(data));

    /* Finishing up the program */
    auto end = std::chrono::high_resolution_clock::now();
    auto elapse = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    print_array(data, size(data));

    std::cout << "Total time execution : "
              << elapse.count()
              << " ms"
              << "\n";

    // pause(1000);

    return EXIT_SUCCESS;
}