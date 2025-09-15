#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * merge - merge deux sous-tableaux
 */
void merge(int *array, int *tmp, size_t left, size_t mid, size_t right)
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
 * merge_sort_rec - récursion
 */
void merge_sort_rec(int *array, int *tmp, size_t left, size_t right)
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
 * merge_sort - fonction publique
 */
void merge_sort(int *array, size_t size)
{
    int *tmp;

    if (!array || size < 2)
        return;

    tmp = malloc(sizeof(int) * size);
    if (!tmp)
        return;

    merge_sort_rec(array, tmp, 0, size);

    free(tmp);
}
