#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: The number of leaves or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

}
