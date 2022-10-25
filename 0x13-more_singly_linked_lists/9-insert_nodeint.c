#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a position.
 * @head: pointer to the start of the list.
 * @idx: selected position
 * @n: data to be inserted
 * Return: index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
		unsigned int i = 0;
		listint_t *temp;
		listint_t *ptr;
		listint_t *new;

	new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		else if (*head == NULL)
		{
			*head = new;
			return (new);
		}

		else

			temp = *head;

	while (i < idx)
	{
		ptr = temp;
		temp = temp->next;
		i++;
	}

		new->n = n;
		new->next = temp;
		ptr->next = new;


return (new);
}
