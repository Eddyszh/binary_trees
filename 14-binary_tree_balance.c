#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (left - right);
}
