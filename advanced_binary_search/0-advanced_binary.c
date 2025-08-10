#include <stdio.h>
#include "search_algos.h"

/**
 * print_subarray - Print the current subarray being searched
 * @array: pointer to the whole array
 * @l: left bound (inclusive)
 * @r: right bound (inclusive)
 *
 * Description: Uses a single loop only for printing, as required.
 */
static void print_subarray(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_binary_rec - Recursive helper to find the first occurrence
 * @array: pointer to the array
 * @l: left bound (inclusive)
 * @r: right bound (inclusive)
 * @value: value to search for
 *
 * Return: index of first occurrence, or -1 if not found
 */
static int advanced_binary_rec(int *array, size_t l, size_t r, int value)
{
	size_t mid;

	if (l > r)
		return (-1);

	print_subarray(array, l, r);

	if (l == r)
		return (array[l] == value ? (int)l : -1);

	mid = l + (r - l) / 2;

	/* Key rule for this task:
	 * - If array[mid] >= value, search the LEFT part including mid.
	 * - Else search the RIGHT part excluding mid.
	 * This guarantees we converge to the FIRST occurrence.
	 */
	if (array[mid] >= value)
		return (advanced_binary_rec(array, l, mid, value));

	return (advanced_binary_rec(array, mid + 1, r, value));
}

/**
 * advanced_binary - Search for a value in a sorted array (first occurrence)
 * @array: pointer to first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the first occurrence of value, or -1 if not present/NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_rec(array, 0, size - 1, value));
}
