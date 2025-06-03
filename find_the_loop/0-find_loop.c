#include "lists.h"


/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: ptr head of list
 * Return: 0 if no cycle, position of contact if cycle
 */
listint_t *check_cycle(listint_t *list)
{
	listint_t *hare, *tortoise = list;

	hare = list->next;

	while (hare)
	{
		if (hare->next)
			hare = hare->next->next;
		else
			hare = hare->next;

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
	listint_t *tortoise, *hare;

	if (!check_cycle(head))
	{
		return (NULL);
	}
	else
	{
		hare = check_cycle(head);
		hare = hare->next;
		tortoise = head->next;
		if (tortoise == hare)
		{
			return (hare);
		}
	};

	return (NULL);
}
