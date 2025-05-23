#include "binary_trees.h"
#include <stdlib.h>

/**
 * tree_height - Computes the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, returns 0.
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	left_height = tree->left ? 1 + tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * heapify_down - Reorganizes a heap by sifting down from the root.
 * @heap: Pointer to the root node of the heap.
 *
 * Return: Pointer to the final position of the sifted node.
 */
heap_t *heapify_down(heap_t *heap)
{
	int temp;

	while (heap->left || heap->right)
	{
		if (!heap->right || heap->left->n > heap->right->n)
		{
			temp = heap->n;
			heap->n = heap->left->n;
			heap->left->n = temp;
			heap = heap->left;
		}
		else
		{
			temp = heap->n;
			heap->n = heap->right->n;
			heap->right->n = temp;
			heap = heap->right;
		}
	}

	return (heap);
}

/**
 * get_last_node - Retrieves the last node in a heap using preorder traversal.
 * @root: Pointer to the root of the heap.
 * @last_node: Double pointer used to store the address of the last node found.
 * @target_depth: Target depth to find the last node.
 * @current_depth: Current depth of traversal.
 */
void get_last_node(
	heap_t *root, heap_t **last_node, size_t target_depth, size_t current_depth
)
{
	if (!root)
		return;

	if (current_depth == target_depth)
		*last_node = root;

	current_depth++;
	get_last_node(root->left, last_node, target_depth, current_depth);
	get_last_node(root->right, last_node, target_depth, current_depth);
}

/**
 * heap_extract - Extracts the root node from a Max Binary Heap.
 * @root: Double pointer to the root node of the heap.
 *
 * Return: The value stored in the extracted root node. If failure, returns 0.
 */
int heap_extract(heap_t **root)
{
	int root_value;
	heap_t *extracted_node, *last_node;

	if (!root || !*root)
		return (0);

	extracted_node = *root;
	root_value = extracted_node->n;

	if (!extracted_node->left && !extracted_node->right)
	{
		free(extracted_node);
		*root = NULL;
		return (root_value);
	}

	get_last_node(extracted_node, &last_node, tree_height(extracted_node), 0);

	extracted_node = heapify_down(extracted_node);
	extracted_node->n = last_node->n;

	if (last_node->parent->right == last_node)
		last_node->parent->right = NULL;
	else
		last_node->parent->left = NULL;

	free(last_node);

	return (root_value);
}
