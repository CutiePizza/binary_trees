#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node at left
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in left child
 * Return: pointer to the new node, NULL if it fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent->left, value);
	}
	else
	{
		tmp = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = binary_tree_node(parent->left, tmp->n);
	}
	return (parent->left);

}
