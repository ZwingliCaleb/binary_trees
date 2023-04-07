#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count number of leaves on binary tree
 * @tree: the tree to be operated on
 * Return: number of leaves or 0 if NULL
 */
size_t binary_tree_leaves (const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
