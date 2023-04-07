#include "binary_trees.h"
/**
 * binary_tree_depth - function that finds the depth of a binary tree
 * @tree: the tree to be traversed
 * Return: the depth of nodee and 0 if it is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	if (!tree)
		return (0);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
