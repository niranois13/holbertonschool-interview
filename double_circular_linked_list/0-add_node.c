#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * add_node_end - Adds a node at the end of a double linked list
 *
 * @str: string contained by the node
 * @list: pointer to a pointer of the head of the double linked list
 *
 * Return: address of the new node, NULL on failure
 */
List *add_node_end(List **list, char *str)
{
	List *new_node, *last_node;

	new_node = malloc(sizeof(List));
	if (new_node == NULL)
		return (NULL);

	new_node->str = str;

	if (list == NULL)
	{
		new_node->prev = new_node;
		new_node->next = new_node;
		*list = new_node;
		return (new_node);
	}

	last_node = (*list)->prev;

	new_node->prev = last_node;
	new_node->next = *list;
	last_node->next = new_node;
	(*list)->prev = new_node;

	return (new_node);
}


/**
 * add_node_begin - Adds a node at the beginning a double linked list
 *
 * @str: string contained by the node
 * @list: pointer to a pointer of the head of the double linked list
 *
 * Return: address of the new node, NULL on failure
 */
List *add_node_begin(List **list, char *str)
{
	List *new_node, *last_node;

	new_node = malloc(sizeof(List));
	if (new_node == NULL)
		return (NULL);

	new_node->str = str;

	if (list == NULL)
	{
		new_node->prev = new_node;
		new_node->next = new_node;
		*list = new_node;
		return (new_node);
	}

	last_node = (*list)->prev;

	new_node->next = *list;
	new_node->prev = last_node;
	(*list)->prev = new_node;
	last_node->next = new_node;

	return (new_node);
}
