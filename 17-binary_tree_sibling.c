#include "binary_trees.h"

/**
 * binary_tree_sibling - find simpling of a node
 * @node: node
 * Return: The node's sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
	}
	else if (node->parent->left == node)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
	}
return (NULL);
}
