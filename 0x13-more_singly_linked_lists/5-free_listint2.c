#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees a list and sets the head at NULL.
 * @head: pointer to the start of the list
 * Return: address of new node
 */

void free_listint2(listint_t **head)
{

		listint_t *temp;
		listint_t *ptr;


	temp = *head;

	while (temp->next)
	{
		ptr = temp->next;
		free(temp);
		temp = ptr;
	}

	free(temp);
	*head = NULL;
}
