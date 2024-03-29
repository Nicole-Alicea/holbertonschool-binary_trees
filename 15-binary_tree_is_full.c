#include "binary_trees.h"

/**
 * binary_tree_is_full - This function checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->right != NULL && tree->left != NULL)
	{
		right_full = binary_tree_is_full(tree->right);

		left_full = binary_tree_is_full(tree->left);

		return (right_full && left_full);
	}
	return (0);
}
