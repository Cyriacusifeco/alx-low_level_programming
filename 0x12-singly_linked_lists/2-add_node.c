#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to the first node of the list
 * @str: pointer to string that adds as the node
 * Return: pointer to new head of list, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	int str_len = 0;

	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	while (str[str_len])
	{

		str_len++;
	}
		temp->len = str_len;

		temp->str = strdup(str);

		temp->next = *head;

		*head = temp;

return (temp);
}
