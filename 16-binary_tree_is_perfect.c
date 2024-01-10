#include "binary_trees.h"

/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: If the tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		if ((tree->left->left == NULL && tree->left->right == NULL) &&
		(tree->right->left == NULL && tree->right->right == NULL))
		{
			return (1);
		}

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	if (tree->parent == NULL)
	{
		return (1);
	}

	return (0);
}
