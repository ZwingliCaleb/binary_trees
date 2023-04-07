#include "binary_trees.h"
/**
 * binary_tree_height_b - function to Measures height for use in the balance factor of  binary tree.
 * @tree: tree for which measuring the balance factor is to bbe done
 * Return: height
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - function to Measure balance factor of a binary tree
 * @tree: tree in question to be used
 * Return: a balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;
	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
