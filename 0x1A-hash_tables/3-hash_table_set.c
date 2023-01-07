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
	hash_node_t *new_node;
	hash_node_t *head;

	unsigned long int index;

	if (strcmp(key, "") == 0)
		return (0);
	if (ht == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->next = NULL;

	new_node->key = malloc(strlen(key) + 1);
	if (new_node->key == NULL)
		return (0);

	new_node->value = malloc(strlen(value) + 1);
	if (new_node->value == NULL)
		return (0);

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}

	else if (ht->array[index] != NULL)
	{
		head = ht->array[index];

		while (head != NULL)
		{

			if (strcmp(head->key, key) == 0)
			{	
				strcpy(head->value, value);
				break;
			}

			head = head->next;


			if (head == NULL)
			{
				new_node->next = ht->array[index];
				ht->array[index] = new_node;
			}

		}

	}
return (1);
}
