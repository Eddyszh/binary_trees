#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		if (binary_tree_is_full(tree->left) != 1)
			return (0);
		if (binary_tree_is_full(tree->right) != 1)
			return (0);
	}
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	return (1);
}
