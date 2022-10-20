#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts the number elements of a list_t list
 * @h: pointer to the list to count
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
		int count_node = 0;
		const list_t *temp;

		temp = h;

	while (temp)
	{


		count_node++;
		temp = temp->next;
	}

return (count_node);
}
