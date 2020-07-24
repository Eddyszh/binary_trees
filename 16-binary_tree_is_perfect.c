#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is perfetc, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int n, node;

	if (!tree)
		return (0);
	for (n = 0, node = 1; n <= binary_tree_height(tree); n++)
		node *= 2;
	return (binary_tree_size(tree) + 1 == node);
}
