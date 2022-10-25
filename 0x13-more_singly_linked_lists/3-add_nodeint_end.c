#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add nodes at the end of linked list_t list
 * @head: pointer to the start of the list
 * @n: Data to add
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

		listint_t *new;
		listint_t *temp;


	temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (temp)
	{
		while (temp->next)

			temp = temp->next;

		temp->next = new;
	}

	else
		*head = new;


	new->n = n;
	new->next = NULL;

return (new);
}
