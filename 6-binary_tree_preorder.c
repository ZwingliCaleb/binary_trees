#include "binary_trees.h"
/**
 * binary_tree_preorder - function going through a binary tree using  preorder traversal
 * @tree: the tree itself
 * @func: pointer to function that calls each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
