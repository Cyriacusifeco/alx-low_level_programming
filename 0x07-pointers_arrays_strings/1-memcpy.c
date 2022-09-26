#include "main.h"
/* more headers goes there */

/**
 * _memcpy - copies memory area
 * @n: first n bytes of memory area
 * @src: source string
 * @dest: destination string
 * Return: Pointer to memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	int j = 0;

	for (; i < n; i++)
	{
		*(dest + j) = src[i];
		j++;
	}
	return (dest);


}
