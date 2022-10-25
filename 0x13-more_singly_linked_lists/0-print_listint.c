#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer to the list to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
		int count_node = 0;
		const listint_t *temp;

		temp = h;

	if (h == NULL)
		return (-1);

	while (temp)
	{

		printf("%d\n", temp->n);

			count_node++;

			temp = temp->next;
	}

return (count_node);
}
