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
    int data[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11, 13, 14, 12, 15};
    // int data[] = {1, 2, 3, 6, 5, 4, 8, 7, 9, 10};

    /* Starting the counter */
    auto start = std::chrono::high_resolution_clock::now();

    /*---------------*\
    |Sorting Algorithm|
    /*---------------*/

    bubble_sort(data, size(data), false);
    // insertion_sort(data, size(data), false);

    /* Finishing up the program */
    auto end = std::chrono::high_resolution_clock::now();
    auto elapse = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Total time execution : "
              << elapse.count()
              << " ms"
              << "\n";

    pause(1000);

    return 0; // Exit success
}