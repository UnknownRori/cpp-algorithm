/**
 * @file unknownrori.h
 * @author UnknownRori (https://github.com/UnknownRori)
 * @brief A collection of my helper function, type definition and macro
 * @version 0.1
 *
 * @copyright MIT
 *
 */

#ifndef UNKNOWNRORI_H
#define UNKNOWNRORI_H

/*---------------*\
|      Macro      |
/*---------------*/

#define size(array) (sizeof((array)) / sizeof((array)[0]))

/*---------------*\
|      Types      |
/*---------------*/

/*    Signed    */

/*  INT   */
#define i16 signed short int
#define i32 signed int
#define i64 signed long int
#define i128 signed long long int

/*  Float   */
#define f32 float

/*   Double   */
#define d32 double
#define d64 long double

/*    UnSigned    */

/*  INT   */
#define ui16 unsigned short int
#define ui32 unsigned int
#define ui64 unsigned long int
#define ui128 unsigned long long int

/*----------------*\
| Helper functions |
/*----------------*/

void print_array(int *arr, int length);

void swap(int *arr, int src, int target);

void clearScreen();

void pause(int miliseconds);

#endif