#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_t *hash_table_create - Create hash tables
 * @size: size of hash table array
 * Return: Address of newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;

	table->array = calloc(table->size, sizeof(hash_table_t *));
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}

return (table);
}
