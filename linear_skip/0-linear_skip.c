#include "search.h"

/**
 * linear_skip - Search for a value in a sorted skip list.
 * @list: Pointer to the head of the skip list.
 * @value: The value to search for.
 *
 * Return: Pointer to the node where value is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start, *end;

	if (!list)
		return (NULL);

	start = list;
	end = list->express;

	while (end)
	{
		printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);
		if (end->n >= value)
			break;

		start = end;
		end = end->express;
	}

	if (!end)
	{
		end = start;
		while (end->next)
			end = end->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start->index, end->index);

	while (start && start->index <= end->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}

	return (NULL);
}
