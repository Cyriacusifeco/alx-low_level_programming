#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list, and returns the head nodes data.
 * @head: pointer to the start of the list
 * Return: address of new node
 */

int pop_listint(listint_t **head)
{
		int n;
		listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

return (n);
}
