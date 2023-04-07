#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with atleast 1 child in a binary tree
 * @tree: tree for which nodes with atleast one child will be counted
 * Return: number of nodes counted or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - measures the size of the binary tree
 * @tree: tree to be measured
 * Return: size of tree or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree for which leaves will be counted
 * Return: number of leaves or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

}
