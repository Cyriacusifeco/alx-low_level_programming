#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: memory size to allocate.
 * Return: ptr on success.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;



	ptr = malloc(b);

	if (ptr == NULL)
	{

		exit(98);
	}




return (ptr);
}
