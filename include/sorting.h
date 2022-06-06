/**
 * @file algorithm.h
 * @author UnknownRori (https://github.com/UnknownRori)
 * @brief A simple implementation on various algorithm technique (Only work in single dimensional array)
 * @version 0.1
 *
 * @copyright MIT
 *
 */

#ifndef ALGORITHM_H
#define ALGORITHM_H

/*---------------*\
|Sorting Algorithm|
/*---------------*/

void bubble_sort(int *arr, int length);
void bubble_sort(int *arr, int start, int end);

void insertion_sort(int *arr, int length);
void insertion_sort(int *arr, int start, int end);

void median_sort(int *arr, int length);
void median_sort(int *arr, int start, int end);

#endif