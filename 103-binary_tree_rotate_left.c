#include "binary_trees.h"

/**
 * binary_tree_rotate_left - This function performs a left-rotation on a
 * binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL || tree->right == NULL)
	{
		return (tree);
	}
	new_root = tree->right;

	if (new_root->left != NULL)
	{
		tree->right = new_root->left;
		new_root->left = tree;
	}
	else
	{
		tree->right = NULL;
		new_root->left = tree;
	}
	return (new_root);
}
