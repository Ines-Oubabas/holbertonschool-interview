#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * merge - Merge two sorted slices of array into tmp buffer, then copy back
 * @array: Original array to write into
 * @tmp: Temporary buffer (size == full array)
 * @left: Left boundary index (inclusive)
 * @mid: Middle index (start of right slice)
 * @right: Right boundary index (exclusive)
 *
 * Return: void
 */
static void merge(int *array, int *tmp, size_t left, size_t mid, size_t right)
{
	size_t i = left, j = mid, k = left;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + left, mid - left);
	printf("[right]: ");
	print_array(array + mid, right - mid);

	while (i < mid && j < right)
	{
		if (array[i] <= array[j])
			tmp[k++] = array[i++];
		else
			tmp[k++] = array[j++];
	}
	while (i < mid)
		tmp[k++] = array[i++];
	while (j < right)
		tmp[k++] = array[j++];

	for (i = left; i < right; i++)
		array[i] = tmp[i];

	printf("[Done]: ");
	print_array(array + left, right - left);
}

/**
 * merge_sort_rec - Recursively split array and merge sort children
 * @array: Array to sort
 * @tmp: Temporary buffer
 * @left: Left boundary index (inclusive)
 * @right: Right boundary index (exclusive)
 *
 * Return: void
 */
static void merge_sort_rec(int *array, int *tmp, size_t left, size_t right)
{
	size_t mid;

	if (right - left < 2)
		return;

	mid = left + (right - left) / 2;
	merge_sort_rec(array, tmp, left, mid);
	merge_sort_rec(array, tmp, mid, right);
	merge(array, tmp, left, mid, right);
}

/**
 * merge_sort - Sort an array using top-down Merge sort
 * @array: Pointer to array
 * @size: Number of elements
 *
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
	int *tmp;

	if (array == NULL || size < 2)
		return;

	tmp = malloc(sizeof(int) * size);
	if (tmp == NULL)
		return;

	merge_sort_rec(array, tmp, 0, size);
	free(tmp);
}
