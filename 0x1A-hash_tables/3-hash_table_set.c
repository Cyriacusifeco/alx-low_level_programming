#include "hash_tables.h"
/**
 * hash_table_set - Adds elements to hash tables
 * @ht: Hash table to be set/updated
 * @key: The key to the value
 * @value: Element to be added
 * Return: Returns 1 on success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	unsigned long int index;

	if (strcmp(key, "") == 0)
		return (0);

	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);

	element->key = malloc(strlen(key) + 1);
	if (element->key == NULL)
		return (0);

	element->value = malloc(strlen(value) + 1);
	if (element->value == NULL)
		return (0);

	strcpy(element->key, key);
	strcpy(element->value, value);

	index = key_index((unsigned char *)element->key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = element;
	}

	else if (strcmp(ht->array[index]->key, key) == 0)
		strcpy(ht->array[index]->value, value);
	else
	{
		element->next = ht->array[index];
		ht->array[index] = element;
	}
	free(element->key);
	free(element->value);
	free(element);
return (1);
}
