#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
    {
        return (NULL); // Invalid parent node
    }

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        return (NULL); // Failed to allocate memory
    }

    new_node->parent = parent;
    new_node->n = value;
    new_node->left = new_node->right = NULL;
    return (new_node);
}
