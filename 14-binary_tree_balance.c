#include "binary_trees.h"

/**
 * binary_tree_balance - This function measures the balance factor
 * of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, tree_balance;

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
	tree_balance = left_height - right_height;

	return (tree_balance);
}
