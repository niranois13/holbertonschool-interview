#include "binary_trees.h"

/**
 * create_avl_node - Creates a new node for an AVL tree.
 *
 * @parent: Pointer to the parent node of the new node.
 * @index: The index of the current element in the array to be used
 * for the node's value.
 * @array: The input sorted array used to build the AVL tree.
 *
 * Return: A pointer to the newly created node, or NULL if malloc fails.
*/

avl_t *create_avl_node(avl_t *parent, int index, int *array)
{
	avl_t *new_node = NULL;

	new_node = malloc(sizeof(avl_t));
	if (!new_node)
		return (NULL);

	new_node->left = new_node->right = NULL;
	new_node->n = array[index];
	new_node->parent = parent;

	return (new_node);
}

/**
* sorted_array_to_avl_tree - Builds an AVL tree from a sorted array.
*
* @array: A pointer to the sorted array to convert into an AVL tree.
* @size: The size of the array.
*
* Return: Pointer to root of the newly created AVL tree, NULL on failure.
*/
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *root = NULL;

	if (!array || size == 0)
		return (NULL);

	root = avl_from_sortd_arr(array, 0, size - 1, NULL);
	return (root);
}

/**
* avl_from_sortd_arr - Recursively builds an AVL tree from a sorted array.
*
* @array: The sorted array used to construct the AVL tree.
* @start: The starting index of the current subarray.
* @end: The ending index of the current subarray.
* @parent: The parent node for the current subtree.
*
* Return: A pointer to the root of the current subtree, or NULL on failure.
*/
avl_t *avl_from_sortd_arr(int *array, size_t start, size_t end, avl_t *parent)
{
	size_t mid;
	avl_t *new_node = NULL;

	if (start > end)
		return (NULL);

	mid = (start + end) / 2;

	new_node = create_avl_node(parent, mid, array);
	if (!new_node)
		return (NULL);

	if (mid != start)
		new_node->left = avl_from_sortd_arr(array, start, mid - 1, new_node);

	if (mid != end)
		new_node->right = avl_from_sortd_arr(array, mid + 1, end, new_node);

	return (new_node);
}
