#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 *
 * Return: the height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)

		return (0);

	left = binary_tree_height(tree->right);

	right = binary_tree_height(tree->left);
	if (right >= left)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_level - perform a function on a specific level of a binary tree
 * @tree: pointer to the root of the tree
 * @l: level of the tree to perform a function on
 * @funt: function to perform
 *
 * Return: void
 */
void binary_tree_level(const binary_tree_t *tree, size_t l, void (*funt)(int))
{
	if (tree == NULL)
		return;
	if (l == 1)
		funt(tree->n);

	else if (l > 1)
	{
		binary_tree_level(tree->left, l - 1, funt);
		binary_tree_level(tree->right, l - 1, funt);
	}
}

/**
 * binary_tree_levelorder - traverses a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*funt)(int))
{
	size_t height, h;

	if (tree == NULL || funt == NULL)
		return;
	height = binary_tree_height(tree);
	for (h = 1; h <= height; h++)
		binary_tree_level(tree, h, funt);
}
