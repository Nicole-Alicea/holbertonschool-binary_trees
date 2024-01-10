#include "binary_trees.h"

/**
 * binary_tree_height - This function measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	return (((left_height > right_height) ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - This function measures the balance factor
 * of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right);
	}
	return (left_height - right_height);
}
