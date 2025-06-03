#include "lists.h"


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
	listint_t *hare = head->next;

	if (!hare)
		return (NULL);

	while (hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				hare = hare->next;
				tortoise = tortoise->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
