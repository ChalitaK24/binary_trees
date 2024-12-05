#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - inserts a node as the left-child of another node
 * @parent: Pointer to the parent node of n_node
 * @value: The value to put in n_node
 *
 * Return: n_node 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
 	n_node->left = NULL;
	n_node->right = NULL;

	return (n_node);
}
