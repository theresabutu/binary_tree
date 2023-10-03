#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @frst: pointer to the first node
 * @scnd: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *frst,
				     const binary_tree_t *scnd)
{
	binary_tree_t *tmp;

	if (frst == NULL || scnd == NULL)
		return (NULL);
	tmp = (binary_tree_t *)scnd;
	while (frst)
	{
		while (second)
		{
			if (frst == scnd)
				return ((binary_tree_t *)frst);
			scnd = scnd->parent;
		}
		scnd = tmp;
		frst = frst->parent;
	}
	return (NULL);
}
