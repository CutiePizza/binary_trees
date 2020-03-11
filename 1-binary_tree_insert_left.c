#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node at left
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in left child
 * Return: pointer to the new node, NULL if it fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
	{
		parent->left = tree;
		parent->left->parent = parent;
	}
	else
	{
		tmp = parent->left;
		parent->left->parent = tmp;
		parent->left = tree;
		parent->left->parent = parent;
		parent->left->left = tmp;
	}
	return (parent->left);

}
