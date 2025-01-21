#include <stdlib.h>
#include "binary_trees.h"

/**
* heap_insert - insert a binary tree node at the right position (Max Heap)
*
* @root: pointer to the pointer of the entrypoint of the tree
* @value: value carried by the node to be inserted
*
* Return: Pointer to the inserted node or NULL otherwise
*/
heap_t *heap_insert(heap_t **root, int value)
{
    heap_t *new_node, *current, *node;
    int temp;

    if (root == NULL)
        return (NULL);

    new_node = binary_tree_node(NULL, value);
    if (new_node == NULL)
        return (NULL);

    if (*root == NULL)
    {
        *root = new_node;
        return (new_node);
    }

    current = *root;
    node = new_node;
    while (1)
    {
        if (value > current->n)
        {
            node->n = current->n;
            current->n = value;
            value = node->n;
        }
        int greater_side = binary_tree_size(*root);
        if (greater_side > 2)
        {
            current = current->right;
            break;
        }
        else if (current->left == NULL)
        {
            current->left = node;
            node->parent = current;
            break;
        }
        else if (current->right == NULL)
        {
            current->right = node;
            node->parent = current;
            break;
        }
    }

    while (new_node->parent && new_node->n > new_node->parent->n)
    {
        temp = new_node->n;
        new_node->n = new_node->parent->n;
        new_node->parent->n = temp;
        new_node = new_node->parent;
    }

    return (new_node);

}


/**
* binary_tree_size - function that measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
*   
* Return: the size of left and right branches of the tree
*/
size_t binary_tree_size(heap_t *tree)
{
	int count_left = 0;
	int count_right = 0;
    int greater_side;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		count_left = binary_tree_size(tree->left);
		count_right = binary_tree_size(tree->right);
	}

    greater_side = count_left - count_right;
	return (greater_side);
}

