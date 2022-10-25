#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t linked list.
 * @head: pointer to the start of the list
 * @index: index to be returned
 * Return: index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
		unsigned int n = 0;
		listint_t *nth_node;

	if (head == NULL)
		return (NULL);

	nth_node = head;

	while (n < index)
	{
	       nth_node = nth_node->next;
		n++;
	}

return (nth_node);
}
