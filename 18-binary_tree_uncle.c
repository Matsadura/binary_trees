#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is root
 * @node: Pointer to the node to check
 * Return: 1 if node is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (binary_tree_is_root(node->parent) == 1)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
