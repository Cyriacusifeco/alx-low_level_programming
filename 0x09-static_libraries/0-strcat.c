#include "main.h"
/**
 * _strcat - Concatenates 2 strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Concatenated version of the strings
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int c;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}
	c = j;

	for (j = 0; j <= c; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
