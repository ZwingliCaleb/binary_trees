#include "binary_trees.h"
/**
 * binary_tree_is_full - function to check if a binary tree is full
 * @tree: pointer to the root node of tree
 * Return: 1 if the tree is full, 0 if not full and also 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}
