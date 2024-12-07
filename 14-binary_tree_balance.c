#include "binary_trees.h"

/**
 * binary_tree_balance -
 *
 *
 * Returm: Balance factor 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (l_height - r_height);
}
