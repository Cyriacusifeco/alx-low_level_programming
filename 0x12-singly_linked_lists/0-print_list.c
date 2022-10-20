#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
		int count_node = 0;
		list_t temp;

		temp = h;

	while (temp)
	{

		printf("[%u] ", temp->len);

		if (temp->str == NULL)
		{

			printf("(nil)\n");
		}

		else
		{

			printf("%s\n", temp->str);
		}
			count_node++;
			temp = temp->next;
}

return (count_node);
}
