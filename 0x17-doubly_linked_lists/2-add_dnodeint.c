#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning od dlist
 * @head: Address of head node
 * @n: Value to be added
 * Return: Address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	(*head) = new;
	return (new);
}
