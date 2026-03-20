#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints an array of integers.
 * @array: the array to be printed.
 * @size: number of elements in @array.
 */
void print_array(const int *array, size_t size);

/**
 * radix_sort - Using radix sort algorithm.
 * @array: the array to sort.
 * @size: number of elements in @array.
 */
void radix_sort(int *array, size_t size);

#endif /* SORT_H */
