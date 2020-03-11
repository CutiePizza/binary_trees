#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node at riight
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in right child
 * Return: pointer to the new node, NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree, *tmp;

	if (parent == NULL)
		return (NULL);
	tree = malloc(sizeof(binary_tree_t));
	if (tree == NULL)
		return (NULL);
	tree->n = value;
	tree->left = NULL;
	tree->right = NULL;
	if (parent->right == NULL)
	{
		parent->right = tree;
		parent->right->parent = parent;
	}
	else
	{
		tmp = parent->right;
		parent->right->parent = tmp;
		parent->right = tree;
		parent->right->parent = parent;
		parent->right->right = tmp;
	}
	return (parent->right);
}
