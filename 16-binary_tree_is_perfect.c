#include "binary_trees.h"

/**
 * is_complete - check if tree is complete
 * @tree: starting node
 * Return: 0 or 1
 */

int is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (is_complete(tree->left) && is_complete(tree->right));
	return (0);
}
/**
 * is_same_level - check if nodes are at the same level
 * @tree: starting node
 * @level: level
 * @leaflevel: level of leaf
 * Return: 0 or 1
 */

int is_same_level(const binary_tree_t *tree, int level, int *leaflevel)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
	{
		if (*leaflevel == 0)
		{
			*leaflevel = level;
			return (1);
		}
		return (level == *leaflevel);
	}
	return is_same_level(tree->left, level + 1, leaflevel) &&
	is_same_level(tree->right, level + 1, leaflevel);
}

/**
 * binary_tree_is_perfect - check if the tree is perfect or not
 * @tree: starting node
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0;

	if (tree == NULL)
		return (0);
	return (is_complete(tree) && is_same_level(tree, 0, &perfect));
}



