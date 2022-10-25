#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add nodes to beginning of linked list_t list
 * @head: pointer to the start of the list
 * @n: Data to add
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

		listint_t *new;
		listint_t *temp;


	if (head == NULL)
		return (NULL);

	temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	*head = new;
	new -> next = temp;
	new -> n = n;

return (new);
}
