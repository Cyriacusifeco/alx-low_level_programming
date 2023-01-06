#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - Gives the index of a Key
 * @key: The key to be indexed.
 * @size: size of hash table array.
 * Return: Index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

		if (index == 0)
			return (size - 1);
return (index % size);
}
