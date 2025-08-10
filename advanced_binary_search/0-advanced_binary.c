#include <stdio.h>
#include "search_algos.h"

/**
 * print_subarray - Prints the current subarray being searched
 * @array: Pointer to the full array
 * @left: Left index of the subarray (inclusive)
 * @right: Right index of the subarray (inclusive)
 *
 * Description: Uses a single loop only for printing, as required.
 */
static void print_subarray(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * r_advanced_binary - Recursive helper to find the first occurrence
 * @array: Pointer to the full array
 * @left: Current left bound (inclusive)
 * @right: Current right bound (inclusive)
 * @value: Value to search for
 *
 * Return: Index of first occurrence, or -1 if not found
 */
static int r_advanced_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_subarray(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		/* Check if it's the first occurrence */
		if (mid == left || array[mid - 1] != value)
			return ((int)mid);
		/* Otherwise, continue searching on the left side (including mid) */
		return (r_advanced_binary(array, left, mid, value));
	}
	else if (array[mid] < value)
	{
		/* Search right half (exclude mid) */
		return (r_advanced_binary(array, mid + 1, right, value));
	}
	/* array[mid] > value: search left half (exclude mid) */
	if (mid == 0)
		return (-1); /* safety for size_t underflow (though left>right is handled) */
	return (r_advanced_binary(array, left, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array (first occurrence)
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not present / array is NULL
 *
 * Note: The array must be sorted in ascending order.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (r_advanced_binary(array, 0, size - 1, value));
}
