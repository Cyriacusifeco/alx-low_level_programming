#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of strings to concatenate
 *
 * Return: Concatenated version of the strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
