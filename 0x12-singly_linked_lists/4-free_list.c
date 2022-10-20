#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list_t list.
 * @head: pointer to head element of list
 * Return: Nothing
 */

void free_list(list_t *head)
{
		list_t *temp;

	while (head)
	{
		temp = head;
		free(temp->str);
		head = temp->next;
		free(temp->next);
		free(temp);
	}

	free(head);
}
