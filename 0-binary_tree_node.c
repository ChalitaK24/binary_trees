#include "binary_trees.h"

/**
 * binary_tree_node - inserts a node as the left-child of another node
 *
 *
 * Return: n_node 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = malloc(siteof(binary_tree_t));
	n_node-> = value;
	n_node->parent = parent;
	n_node->left;

	return (n_node);
}
