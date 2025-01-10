#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_node - Function that inserts a number in a sorted linked list
* @head: Pointer of a pointer to the first node of the linked list
* @number: Int, the numbe to be inserted
* Return: the adress of the inserted node or NULL on failure.
*/

listint_t *insert_node(listint_t **head, int number);