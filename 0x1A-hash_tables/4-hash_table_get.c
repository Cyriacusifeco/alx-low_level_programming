#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_get - A function that retrieves a value from a hash table
 * @key: The key to be indexed.
 * @ht: Hash table address
 * Return: Returns the value on success.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	head = ht->array[index];

	if (head == NULL)
		return (NULL);

	while (strcmp(head->key, key) != 0)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);

	}

return (head->value);
}
