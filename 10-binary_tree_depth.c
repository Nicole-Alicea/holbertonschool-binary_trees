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
	size_t parent_depth;

	if (tree == NULL)
	{
		return;
	}
	else
	{
		parent_depth = binary_tree_depth(tree->parent);

		return (parent_depth + 1);
	}
}
