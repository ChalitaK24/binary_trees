#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size or 0 if NULL
 */


size_t binary_tree_size(const binary_tree_t *tree)

{
	if (tree == NULL)
		return (0);

	size_t l_size = binary_tree_size(tree->left);
	size_t r_size = binary_tree_size(tree->right);

	return (l_size + r_size + 1);
}
