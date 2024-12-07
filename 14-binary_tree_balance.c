#include "binary_trees.h"

/**
 * binary_tree_balance -
 *
 *
 * Returm: Balance factor 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	 size_t l_height = binary_tree_height(tree->left);
	 size_t r_height = binary_tree_height(tree->right);

	 return ((l_height > r_height ? l_height : r_height) + 1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0;
	int r_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l_height = (int)binary_tree_height(tree->left);

	if (tree->right)
		r_height = (int)binary_tree_height(tree->right);

	return (l_height - r_height);
}
