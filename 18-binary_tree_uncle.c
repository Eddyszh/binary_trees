#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *pnt;

	if (!node || !node->parent)
		return (NULL);
	pnt = node->parent;
	if (pnt->parent && pnt->parent->left != pnt)
		return (pnt->parent->left);
	if (pnt->parent && pnt->parent->right != pnt)
		return (pnt->parent->right);
	return (NULL);
}
