#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree
 * @parent: the parent node of the node to create
 * @value: the value of the node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;
	
	tree = malloc(sizeof(binary_tree_t));
	if (tree == NULL || parent == NULL)
		return (NULL);
	tree->n = value;
	tree->parent = parent;
	tree->left = NULL;
	tree->right = NULL;
	return(tree);
}
