#include <stdlib.h>
#include <sys/types.h>
#include "sort.h"

/**
 * get_max - Gets the maximum value in an array
 * @array: The array
 * @size: Number of elements in the array
 *
 * Return: Maximum value
 */
static int get_max(int *array, size_t size)
{
	size_t i;
	int max;

	max = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
 * counting_sort_exp - Sorts an array according to a specific digit
 * @array: The array to sort
 * @size: Number of elements in the array
 * @exp: The current digit exponent
 */
static void counting_sort_exp(int *array, size_t size, int exp)
{
	int count[10] = {0};
	int *output;
	int digit;
	ssize_t i;

	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return;

	for (i = 0; (size_t)i < size; i++)
	{
		digit = (array[i] / exp) % 10;
		count[digit]++;
	}

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = (ssize_t)size - 1; i >= 0; i--)
	{
		digit = (array[i] / exp) % 10;
		output[count[digit] - 1] = array[i];
		count[digit]--;
	}

	for (i = 0; (size_t)i < size; i++)
		array[i] = output[i];

	free(output);
}

/**
 * radix_sort - Sorts an array of integers in ascending order
 * using the LSD Radix sort algorithm
 * @array: Array to sort
 * @size: Number of elements in the array
 */
void radix_sort(int *array, size_t size)
{
	int max;
	int exp;

	if (array == NULL || size < 2)
		return;

	max = get_max(array, size);

	for (exp = 1; max / exp > 0; exp *= 10)
	{
		counting_sort_exp(array, size, exp);
		print_array(array, size);
	}
}