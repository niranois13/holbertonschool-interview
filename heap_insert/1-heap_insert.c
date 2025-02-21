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
    heap_t *new_node, *parent_node, *node;

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
    else
    {
        
    }


}


