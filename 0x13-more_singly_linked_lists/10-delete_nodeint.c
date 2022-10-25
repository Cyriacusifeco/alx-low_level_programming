#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at an index.
 * @head: pointer to the start of the list.
 * @index: selected index.
 * Return: index
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
		unsigned int i = 0;
		listint_t *temp;
		listint_t *del;
		listint_t *ptr;



		if (*head == NULL)

			return (-1);

		else
			temp = *head;

	while (i < index)
	{
		del = temp;
		ptr = del;
		temp = temp->next;
		i++;
	}

		free(del);
		ptr->next = temp->next;


return (1);
}
