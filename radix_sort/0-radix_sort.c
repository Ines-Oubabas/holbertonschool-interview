#include "sort.h"

/**
 * get_max - Find the maximum value in an array.
 * @array: the array to search.
 * @size: number of elements in @array.
 * Return: maximum integer in array.
 */
static int get_max(int *array, size_t size)
{
	size_t i;
	int max = array[0];

	for (i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];

	return (max);
}

/**
 * counting_sort_digit - Stable sort of array by a specific digit.
 * @array: the array to sort.
 * @size: number of elements in @array.
 * @exp: exponent corresponding to current digit (1, 10, 100, ...).
 */
static void counting_sort_digit(int *array, size_t size, int exp)
{
	int *output, count[10] = {0};
	size_t i;
	int digit;
	int pos[10];

	output = malloc(size * sizeof(int));
	if (!output)
		return;

	/* Count occurrences of each digit. */
	for (i = 0; i < size; i++)
	{
		digit = (array[i] / exp) % 10;
		count[digit]++;
	}

	/* Compute starting index for each digit. */
	pos[0] = 0;
	for (i = 1; i < 10; i++)
		pos[i] = pos[i - 1] + count[i - 1];

	/* Build the output array to keep it stable. */
	for (i = 0; i < size; i++)
	{
		digit = (array[i] / exp) % 10;
		output[pos[digit]++] = array[i];
	}

	/* Copy back to original array. */
	for (i = 0; i < size; i++)
		array[i] = output[i];

	free(output);
}

/**
 * radix_sort - Using radix sort algorithm.
 * @array: the array to sort.
 * @size: number of elements in @array.
 */
void radix_sort(int *array, size_t size)
{
	int max, exp;

	if (!array || size < 2)
		return;

	max = get_max(array, size);
	/* Perform counting sort for each digit, starting at exp = 1. */
	for (exp = 1; max / exp > 0; exp *= 10)
	{
		counting_sort_digit(array, size, exp);
		print_array(array, size);
	}
}
