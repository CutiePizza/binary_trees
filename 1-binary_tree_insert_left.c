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
	tree = binary_tree_node(parent, value);
	if (tree == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = tree;
	}
	else
	{
		tmp = parent->left;
		tmp->parent = tree;
		tree->left = tmp;
		parent->left = tree;

	}
	return (tree);

}
