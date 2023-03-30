#include "binary_trees.h"

/**
 * binary_tree_insert_left - insertes a node as the left child of a node
 * @parent: is the pointer to the node to insert left child in
 * @value: value stored in the new node
 * If parent already has left child the new node must take its place and the old left child must be set as the left child of the new node
 * Return: a pointer to the created node or NULL if there is a failure or if parent is also NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	if (new->left)
		new->left->parent = new;
	return (new);
}
