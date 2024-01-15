#include "binary_trees.h"
/**
 * binary_tree_is_complete - This function checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t *current,
		      **queue = malloc(sizeof(binary_tree_t *) * 1000);
	int front = 0, rear = 0, flag = 0;

	if (tree == NULL)
		return (0);

	queue[rear++] = tree;

	while (front < rear)
	{
		current = queue[front++];

		 if (!current->left)
			 flag = 1;
		 else if (flag)
		 {
			 free(queue);
			 return (0);
		 }
		 else
			 queue[rear++] = current->left;
		 if (!current->right)
			 flag = 1;
		 else if (flag)
		 {
			 free(queue);
			 return (0);
		 }
		 else
			 queue[rear++] = current->right;
	}
	free(queue);
	return (1);
}
