#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @root_tree: Pointer to the root node
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (root_tr == NULL)
		return ();

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(root_tr);
}
