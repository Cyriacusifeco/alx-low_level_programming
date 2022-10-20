#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node - A function  that adds a new node at the end of a list_t list.
 * @head: pointer to the first node of the list
 * @str: pointer to string that adds as the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
		list_t *ptr, *temp;
		int len_str = 0;

		while (str[len_str] != '\0')
			len_str++;

		temp = malloc(sizeof(list_t));

		if (temp == NULL)
			return (NULL);

		temp->len = len_str;

		temp->str = strdup(str);

		if (*head == NULL)
		{
			temp->next = *head;
			*head = temp;
		}
		else
		{
			temp->next = NULL;
			ptr = *head;
		}
		while (ptr->next != NULL)
		{

			ptr = ptr->next;
			ptr->next = temp;
		}

return (temp);
}
