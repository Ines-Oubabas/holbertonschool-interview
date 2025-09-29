#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * add_node_end - add a new node at the end of a double circular linked list
 * @list: pointer to the head pointer of the list
 * @str:  string to duplicate into the new node
 *
 * Return: address of the new node, or NULL on failure
 */
List *add_node_end(List **list, char *str)
{
	List *new_node, *tail;
	char *dup;

	if (list == NULL || str == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
		return (NULL);

	new_node = malloc(sizeof(List));
	if (new_node == NULL)
	{
		free(dup);
		return (NULL);
	}
	new_node->str = dup;

	/* Empty list: initialize circular links to itself */
	if (*list == NULL)
	{
		new_node->prev = new_node;
		new_node->next = new_node;
		*list = new_node;
		return (new_node);
	}

	/* Non-empty: insert before head, after current tail */
	tail = (*list)->prev;
	new_node->next = *list;
	new_node->prev = tail;
	tail->next = new_node;
	(*list)->prev = new_node;

	return (new_node);
}

/**
 * add_node_begin - add a new node at the beginning of a double circular list
 * @list: pointer to the head pointer of the list
 * @str:  string to duplicate into the new node
 *
 * Return: address of the new node, or NULL on failure
 */
List *add_node_begin(List **list, char *str)
{
	List *new_node;

	new_node = add_node_end(list, str);
	if (new_node == NULL)
		return (NULL);

	/* Make the newly added node the head */
	*list = new_node;

	return (new_node);
}
