#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the nodes with at least
 * 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Amount of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, total_nodes;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1);
	}
	left_nodes = binary_tree_nodes(tree->left);

	right_nodes = binary_tree_nodes(tree->right);

	total_nodes = left_nodes + right_nodes;

	return (total_nodes);
}
