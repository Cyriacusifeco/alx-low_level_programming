#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  a function that allocates memory for an array, using malloc.
 * @nmemb: Array variable
 * @size: Array size in bytes
 * Return: pointer to array on success.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);


	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{

		return (NULL);
	}



return (ptr);

}
