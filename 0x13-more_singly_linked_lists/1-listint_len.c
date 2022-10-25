#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - finds the elements of elements in a linked list_t list
 * @h: pointer to the list
 * Return: the number of elements.
 */

size_t listint_len(const listint_t *h)
{
		int count_node = 0;

	if (h == NULL)
		return (-1);

	while (h)
	{

		count_node++;
		h = h->next;
	}

return (count_node);
}
