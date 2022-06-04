/**
 * @file unknownrori.cpp
 * @author UnknownRori (https://github.com/UnknownRori)
 * @brief Implementation from unknownrori.h
 * @version 0.1
 * @date 2022-06-04
 *
 * @copyright MIT
 *
 */

#include <iostream>
#include <thread>
#include <chrono>
#include "../include/unknownrori.h"

/*----------------*\
| Helper functions |
/*----------------*/

/**
 * @brief Print 1 dimensional array
 *
 * @param arr
 * @param length
 */
void print_array(int *arr, int length)
{
    for (size_t i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

/**
 * @brief Swap two value in 1 dimensional array
 *
 * @param arr
 * @param src
 * @param target
 */
void swap(int *arr, int src, int target)
{
    int temp = arr[src];
    arr[src] = arr[target];
    arr[target] = temp;
}

/**
 * @brief Clear screen
 *
 */
void clearScreen()
{
#ifdef WINDOWS
    std::system("cls");
#else
    std::system("clear");
#endif
}

/**
 * @brief Pause
 *
 * @param miliseconds
 */
void pause(int miliseconds)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(miliseconds));
}