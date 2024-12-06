#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * @parent: Pointer to n_node
 * @value: The value to store in n_nodw
 *
 * Return: pointer to n_node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));

	if (n_node == NULL)
		retutn (NULL);

	n_node->n = value;
	n_node->parent = parent;
	n_node->left = parent->left;
	n_node->right = NULL;


	parent->left = n_node;

	return( n_node);