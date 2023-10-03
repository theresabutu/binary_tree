#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

 // First, delete the left and right subtrees recursively

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

 // After the subtrees are deleted, free the current node

	free(tree);
}
