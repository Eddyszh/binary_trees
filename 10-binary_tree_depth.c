#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of node, if tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent;

	if (!tree)
		return (0);
	for (parent = 0; tree && tree->parent; parent++)
		tree = tree->parent;
	return (parent);
}
