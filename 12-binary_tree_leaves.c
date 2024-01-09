#include "binary_trees.h"

/**
 * binary_tree_leaves - This function counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: Amount of leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves, total_leaves;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_leaves = binary_tree_leaves(tree->left);

	right_leaves = binary_tree_leaves(tree->right);

	total_leaves = left_leaves + right_leaves;

	return (total_leaves);
}