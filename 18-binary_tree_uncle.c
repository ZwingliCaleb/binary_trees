#include "binary_trees.h"
/**
 * binary_tree_uncle - function to find uncle of a given node
 * @node: pointer to node to find uncle
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling - function to find the sibling of a node
 * @node: pointer to node for finding sibling
 * Return: points to sibling node
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
