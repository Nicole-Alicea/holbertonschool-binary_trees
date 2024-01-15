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

	newRoot = tree->right;

	if (tree->right == NULL || tree == NULL)
	{
		return (NULL);
	}

	tree->right = newRoot->left;

	if (newRoot->left != NULL)
	{
		newRoot->left->parent = tree;
	}

	newRoot->left = tree;
	newRoot->parent = tree->parent;
	tree->parent = newRoot;

	return (new_root);
}
