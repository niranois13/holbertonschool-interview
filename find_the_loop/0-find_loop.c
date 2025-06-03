#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: ptr head of list
 * Return: 0 if no cycle, position of contact if cycle
 */
listint_t *check_cycle(listint_t *list)
{
	listint_t *hare = list->next;
	listint_t *tortoise = list;

	while (hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (tortoise == hare)
			return (hare);
	}

	return (NULL);
}


/**
* find_listint_loop - Finds the entry point of a loop in a linked list.
*                     It uses Floyd's algorithm, also known as :
*                     Floyd's Tortoise and Hare Cycle Detection Algorithm.
*
* @head: first node of the linked list.
*
* Return: address of the node where the loop starts, NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = check_cycle(head);

	if (!hare)
		return (NULL);


	while (tortoise != hare)
	{
		if (!tortoise || !hare)
			return (NULL);
		
		hare = hare->next;
		tortoise = tortoise->next;
	};

	return (tortoise);
}
