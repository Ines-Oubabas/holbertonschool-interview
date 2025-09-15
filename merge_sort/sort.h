#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * print_array - Print an array of integers
 * @array: Pointer to the first element
 * @size: Number of elements in @array
 *
 * Return: void
 */
void print_array(const int *array, size_t size);

/**
 * merge_sort - Sort an array of integers in ascending order using Merge sort
 * @array: Pointer to the first element of the array
 * @size: Number of elements in @array
 *
 * Return: void
 */
void merge_sort(int *array, size_t size);

#endif /* SORT_H */
