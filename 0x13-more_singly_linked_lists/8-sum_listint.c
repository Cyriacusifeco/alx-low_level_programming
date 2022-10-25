#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - finds the sum of all data in a linked list.
 * @head: pointer to the start of the list.
 * Return: index
 */

int sum_listint(listint_t *head)
{
		int sum = 0;
		listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp->next)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;

return (sum);
}
