#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the node with only one child
 * @tree: root node
 * Return: size of binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	return (1 + (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)));
}
