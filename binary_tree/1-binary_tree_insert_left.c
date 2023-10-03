#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Description: If parent already has a left-child, the new node must take its
 * place, and the old left-child must be set as the left-child of the new node.
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_child;

    if (parent == NULL)
        return (NULL);

    // Create a new left child node
    left_child = binary_tree_node(parent, value);
    if (left_child == NULL)
        return (NULL); // Failed to allocate memory

    // Check if parent already has a left child
    if (parent->left != NULL)
    {
        // Set the old left child as the left child of the new node
        left_child->left = parent->left;
        parent->left->parent = left_child;
    }

    // Set the new node as the left child of the parent
    parent->left = left_child;

    return (left_child);
}