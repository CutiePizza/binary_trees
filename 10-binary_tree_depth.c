#include "binary_trees.h"

#define MAX(a, b)  (a < b ? b : a)

/**
 * depth - measures the height of a binary tree
 * @tree: root node
 * Return: size of binary tree
 */

size_t depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + depth(tree->parent));

}

/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: root node
 * Return: size of binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n;

	if (tree == NULL)
		return (0);
	n = depth(tree);
	return (n);
}
