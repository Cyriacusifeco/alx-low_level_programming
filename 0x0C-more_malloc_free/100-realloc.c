#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: pointer to old array
 * @old_size: old array size to be reallocated
 * @new_size: new array size.
 * Return: pointer to new array on success.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *new_ptr;

	if (new_size == old_size)

		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}

	new_ptr = malloc(sizeof(unsigned int) * new_size);

	if (ptr == NULL)
	{

		return (NULL);
	}

	free(ptr);


return (new_ptr);

}
