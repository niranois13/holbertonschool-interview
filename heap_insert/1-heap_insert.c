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

        if (current->left == NULL)
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
        else
        {
            if (current->left->left == NULL || current->left->right == NULL)
                current = current->left;
            else
                current = current->right;
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
