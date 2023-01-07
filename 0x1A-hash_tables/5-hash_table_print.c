#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - A function that prints values of a hash table
 * @ht: Hash table address
 * Return: Returns the value on success.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i = 0;
	char *sep;

	if (ht == NULL)
		return;
	printf("{");

	sep = "";

	while (i < ht->size)
	{
		head = ht->array[i];

		while (head != NULL)
		{
		printf("%s'%s': '%s'", sep, head->key, head->value);

		head = head->next;
		}

		i++;
	}

	printf("}\n");
return;
}
