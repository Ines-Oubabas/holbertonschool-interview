#include "sort.h"

/**
 * swap - Swap two integers in an array
 * @a: First integer pointer
 * @b: Second integer pointer
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * heapify - Maintains the max-heap property
 * @array: Array of integers
 * @size: Total size of the array (used for print_array)
 * @n: Current size of heap (shrinks after each sort step)
 * @i: Index of the current node
 */
void heapify(int *array, size_t size, size_t n, size_t i)
{
	size_t largest = i;
	size_t left = 2 * i + 1;
	size_t right = 2 * i + 2;

	if (left < n && array[left] > array[largest])
		largest = left;

	if (right < n && array[right] > array[largest])
		largest = right;

	if (largest != i)
	{
		swap(&array[i], &array[largest]);
		print_array(array, size);
		heapify(array, size, n, largest);
	}
}

/**
 * heap_sort - Sorts an array using heap sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (!array || size < 2)
		return;

	for (i = (int)(size / 2) - 1; i >= 0; i--)
		heapify(array, size, size, (size_t)i);

	for (i = (int)size - 1; i > 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		heapify(array, size, (size_t)i, 0);
	}
}
