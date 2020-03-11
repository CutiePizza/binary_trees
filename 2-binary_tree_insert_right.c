#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node at riight
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in right child
 * Return: pointer to the new node, NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent->right, value);
		if (parent->right == NULL)
			return (NULL);
	}
	else
	{
		tmp = parent->right;
		parent->right = binary_tree_node(parent, value);
		if (parent->right == NULL)
			return (NULL);
		parent->right->right = binary_tree_node(parent->right, tmp->n);
		if (parent->right->right == NULL)
			return (NULL);
	}
	return (parent->right);

}
