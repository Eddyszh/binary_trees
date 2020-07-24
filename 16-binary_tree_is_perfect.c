#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is perfetc, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t n, node;

	if (!tree)
		return (0);
	for (n = 0, node = 1; n <= binary_tree_height(tree); n++)
		node = node * 2;
	return (binary_tree_size(tree) + 1 == node);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: the height, if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;
	if (left < right)
		return (right);
	return (left);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of tree, if tree is NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
