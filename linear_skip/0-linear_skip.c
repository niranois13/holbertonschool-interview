#include <stdio.h>
#include <stdlib.h>
#include "search.h"

/**
 * linear_skip - Searches for a value in a skip list
 *
 * @head: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to the node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *head, int value)
{
	skiplist_t *node = head;
	skiplist_t *express_node;

	if (head == NULL)
		return (NULL);

	while (node)
	{
		express_node = node->express;

		if (express_node && express_node->n <= value)
		{
			printf("Value checked at index[%lu] = [%d]\n", node->index, node->n);
			node = express_node;
		}
		else
		{
			printf("Value checked at index[%lu] = [%d]\n", node->index, node->n);
			break;
		}
	}

	while (node && node->n <= value)
	{
		printf("Value checked at index[%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	return (NULL);
}
