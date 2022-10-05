#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates a dynamic array && fills it with constant character
 * @size: required size in memory to allocate
 * @c: constant size to be filled to allocated memory
 *
 * Return: Always 0 on success
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)

		return (NULL);

	for (i = 0; i <= size; i++)
	{
		ptr[i] = c;
	}


return (ptr);
}
