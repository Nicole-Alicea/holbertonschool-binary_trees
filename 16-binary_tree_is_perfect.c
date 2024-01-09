#include "binary_trees.h"

/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: If the tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	return (left_height == right_height);
}
