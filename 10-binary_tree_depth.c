#include "binary_trees.h"

/**
 * binary_tree_depth - This function measures the depth of a node
 * in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node, otherwise 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_depth = binary_tree_depth(tree->left);

		right_depth = binary_tree_depth(tree->right);

		if (left_depth > right_depth)
		{
			return (left_depth + 1);
		}
		else
		{
			return (right_depth + 1);
		}
}
