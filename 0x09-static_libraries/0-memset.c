#include "main.h"
/* more headers goes there */

/**
 * _memset - Fills memory with constant byte
 * @n: first n bytes of memory area
 * @b: constant bytes to be filled
 * @s: pointer to memory area
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);


}
