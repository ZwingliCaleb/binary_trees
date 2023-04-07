#include "binary_trees.h"
/**
 * binary_tree_is_root - check for the root node
 * @node: the node being checked out for
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent)? 0:1);
}
