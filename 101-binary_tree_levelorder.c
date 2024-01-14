#include "binary_trees.h"

/**
 * enqueue - This function adds a node to a queue
 * @q: Pointer to the queue where the node is to be added
 * @node: Pointer to the binary tree node
 *
 * Return: void
 */

void enqueue(queue_t *q, const binary_tree_t *node)
{
	queue_node_t *new_node = (queue_node_t *)malloc(sizeof(queue_node_t));
	if (!new_node)
	{
		fprintf(stderr, "Memory allocation error\n");
		exit(EXIT_FAILURE);
	}
	new_node->node = node;
	new_node->next = NULL;
	
	if (!q->front)
	{
		q->front = q->rear = new_node;
	}
	else
	{
		q->rear->next = new_node;
		q->rear = new_node;
	}
}

/**
 * dequeue - This function removes a node from a queue
 * @q: Pointer to the queue from which the node is to be removed
 *
 * Return: Pointer to the dequeued binary tree node, NULL if the queue is empty
 */

const binary_tree_t *dequeue(queue_t *q)
{
	const binary_tree_t *node;
	queue_node_t *temp;

	if (!q->front)
	{
		return (NULL);
	}
	node = q->front->node;
	temp = q->front;

	q->front = q->front->next;
	free(temp);
	
	return (node);
}

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
