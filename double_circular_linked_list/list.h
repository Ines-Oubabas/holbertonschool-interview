#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

/**
 * struct List - doubly linked circular list node
 * @str: string (malloc'ed with strdup)
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: Node structure for a double circular linked list
 */
typedef struct List
{
	char *str;
	struct List *prev;
	struct List *next;
} List;

/* Prototypes */
List *add_node_end(List **list, char *str);
List *add_node_begin(List **list, char *str);

#endif /* LIST_H */
