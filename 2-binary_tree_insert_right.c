#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * @parent: Pointer to n_node to insert the right-child
 * @value: The value to store n_node
 *
 * Return: Pointer to the n_node ir NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		returm (NULL);

	n_node->n = value;
	n_node->parent = parent;
	n_node->right = parent->right;
	n_node->left = NULL;

	parent->right = n_node;

	return (n_node);
}
