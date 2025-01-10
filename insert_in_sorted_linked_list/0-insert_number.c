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

listint_t *insert_node(listint_t **head, int number) {
    listint_t *temp, *new_node;
    temp = *head;

    if (head == NULL) {
        return (NULL);
    }

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        free(new_node);
        return (NULL);
    }

    if (*head == NULL || (*head)->n >= number) {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    while (temp->next != NULL && temp->next->n >= number) {
        temp = temp->next;
    }

    new_node->next = temp->next;
    temp->next = new_node;

    return (new_node);
}
