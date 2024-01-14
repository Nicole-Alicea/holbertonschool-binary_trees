#include "binary_trees.h"

/**
 * binary_tree_levelorder - This function goes through a binary tree
 * using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *q;
	const binary_tree_t *current;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	q = (queue_t *)malloc(sizeof(queue_t));

	if (!q)
	{
		fprintf(stderr, "Memory allocation error\n");
		exit(EXIT_FAILURE);
	}
	q->front = q->rear = NULL;
	current = tree;

	enqueue(q, current);

	while (q->front)
	{
		current = dequeue(q);
		func(current->n);

		if (current->left)
		{
			enqueue(q, current->left);
		}
		if (current->right)
		{
			enqueue(q, current->right);
		}
	}
	free(q);
}
