#include "binary_trees.h"

/**
 * binary_tree_node - inserts a node as the left-child of another node
 * @parent: Pointer to the parent node of n_node
 * @value: The value to put in n_node
 *
 * Return: n_node 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = malloc(siteof(binary_tree_t));
	n_node-> = value;
	n_node->parent = parent;
 	n_node->left = NULL;

	return (n_node);
}
