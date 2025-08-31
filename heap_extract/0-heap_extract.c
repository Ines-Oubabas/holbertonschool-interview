#include <stdlib.h>
#include "binary_trees.h"

/* File-local helpers (no more than 5 functions total) */
static size_t tree_size(const heap_t *root);
static heap_t *node_at_index(heap_t *root, size_t idx);
static void heapify_down(heap_t *node);

/**
 * heap_extract - Extracts the root value of a Max Binary Heap
 * @root: Double pointer to the root node of the heap
 *
 * Return: The value stored in the root node, or 0 on failure
 */
int heap_extract(heap_t **root)
{
	int value;
	size_t size;
	heap_t *last, *parent;

	if (root == NULL || *root == NULL)
		return (0);

	value = (*root)->n;
	size = tree_size(*root);

	/* If only one node, free it and empty the heap */
	if (size == 1)
	{
		free(*root);
		*root = NULL;
		return (value);
	}

	/* Get last node (index = size) and its parent (index = size / 2) */
	parent = node_at_index(*root, size >> 1);
	last = node_at_index(*root, size);
	if (last == NULL || parent == NULL)
		return (0);

	/* Replace root's value with last node's value, then delete last node */
	(*root)->n = last->n;
	if (parent->right == last)
		parent->right = NULL;
	else
		parent->left = NULL;
	free(last);

	/* Restore heap property by sifting down */
	heapify_down(*root);

	return (value);
}

/**
 * tree_size - Measures the size (node count) of a binary tree
 * @root: Pointer to the root node
 *
 * Return: Number of nodes in the tree
 */
static size_t tree_size(const heap_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + tree_size(root->left) + tree_size(root->right));
}

/**
 * node_at_index - Gets node at a given 1-based index using
 *                 array-style (level-order) mapping of a complete tree
 * @root: Pointer to the root node
 * @idx:  1-based index of the desired node
 *
 * Return: Pointer to the node at index idx, or NULL on failure
 */
static heap_t *node_at_index(heap_t *root, size_t idx)
{
	size_t level, max_level, tmp;
	heap_t *node;

	if (root == NULL || idx == 0)
		return (NULL);

	/* Count bits in idx (skip the MSB for traversal) */
	tmp = idx;
	max_level = 0;
	while (tmp > 1)
	{
		tmp >>= 1;
		max_level++;
	}

	node = root;
	level = max_level;
	while (level > 0 && node != NULL)
	{
		if ((idx >> (level - 1)) & 1)
			node = node->right;
		else
			node = node->left;
		level--;
	}
	return (node);
}

/**
 * heapify_down - Sifts a node down to restore Max Heap property
 * @node: Pointer to the node to sift down
 */
static void heapify_down(heap_t *node)
{
	heap_t *largest, *left, *right;
	int tmp;

	if (node == NULL)
		return;

	while (1)
	{
		left = node->left;
		right = node->right;
		largest = node;

		if (left && left->n > largest->n)
			largest = left;
		if (right && right->n > largest->n)
			largest = right;

		if (largest == node)
			break;

		/* Swap values with the larger child */
		tmp = node->n;
		node->n = largest->n;
		largest->n = tmp;

		node = largest;
	}
}
