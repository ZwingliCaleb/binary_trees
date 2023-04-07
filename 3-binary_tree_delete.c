#include "binary_trees.h"
/**
 * binary_tree_delete -function to  delete an entire binary tree
 * @tree: a pointer to rooot node of tree to be deleted
 * Desc: do none if tree is NULL
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}

