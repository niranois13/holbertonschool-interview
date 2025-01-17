#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_node - Creates a binary tree node
*
* @parent: pointer to the parent node of the node to create
* @value: value contained in the newly created node
*
* Return: pointer to the newly created node. Or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	// if (parent == NULL)
	// 	return (new_node);
	// else if (parent->left == NULL)
	// 	parent->left = new_node;
	// else if (parent->right == NULL)
	// 	parent->right = new_node;
	// else
	// {
	// 	free(new_node);
	// 	return (NULL);
	// }

	return (new_node);
}
