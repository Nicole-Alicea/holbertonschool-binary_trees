#include "binary_trees.h"

/**
 * binary_trees_ancestor - This function finds the lowest common ancestor
 * of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	while (first != NULL)
	{
		temp = second;

		while (temp != NULL)
		{
			if (first == temp)
			{
				return ((binary_tree_t *)first);
			}
			temp = temp->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
