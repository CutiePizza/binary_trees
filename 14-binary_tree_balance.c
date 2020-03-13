#include "binary_trees.h"

#define MAX(a, b)  (a < b ? b : a)

/**
 * height - measures the height of a binary tree
 * @tree: root node
 * Return: size of binary tree
 */

size_t height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + MAX(height(tree->left), height(tree->right)));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node
 * Return: size of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n;

	if (tree == NULL)
		return (0);
	n = height(tree);
	return (n - 1);
}

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: starting node
 * Return: The measure int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		left = (int)binary_tree_height(tree->left);
		right = (int)binary_tree_height(tree->right);
	}
	else
	{
		if (tree->left != NULL)
			left = (int)binary_tree_height(tree);
		if (tree->right != NULL)
			right = (int)binary_tree_height(tree);
	}
	return (left - right);
}
