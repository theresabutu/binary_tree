#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Description: If the parent already has a right-child, the new node must take its
 * place, and the old right-child must be set as the right-child of the new node.
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *right_child;

    if (parent == NULL)
        return (NULL);

    // Create a new right child node
    right_child = binary_tree_node(parent, value);
    if (right_child == NULL)
        return (NULL); 

    if (parent->right != NULL)

    {
        right_child->right = parent->right;
        parent->right->parent = right_child;
    }

    // Set the new node as the right child of the parent
    parent->right = right_child;

    return (right_child);
}
